// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS_NAMED("Acl")
@interface KNVAcl : NSObject
+ (NSString * __nonnull)CreatorKey;
@property (nonatomic, readonly, copy) NSString * __nonnull creator;
- (nonnull instancetype)initWithCreator:(NSString * __nonnull)creator OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithJson:(NSDictionary<NSString *, id> * __nonnull)json;
- (NSDictionary<NSString *, id> * __nonnull)toJson;
@end

@class KNVQuery;

SWIFT_PROTOCOL_NAMED("Cache")
@protocol KNVCache
@property (nonatomic, copy) NSString * __nonnull persistenceId;
@property (nonatomic, copy) NSString * __nonnull collectionName;
- (void)saveEntity:(NSDictionary<NSString *, id> * __nonnull)entity;
- (void)saveEntities:(NSArray<NSDictionary<NSString *, id> *> * __nonnull)entities;
- (NSDictionary<NSString *, id> * __nullable)findEntity:(NSString * __nonnull)objectId;
- (NSArray<NSDictionary<NSString *, id> *> * __nonnull)findEntityByQuery:(KNVQuery * __nonnull)query;
- (NSArray<NSDictionary<NSString *, id> *> * __nonnull)findAll;
- (void)removeEntity:(NSDictionary<NSString *, id> * __nonnull)entity;
- (NSUInteger)removeEntitiesByQuery:(KNVQuery * __nonnull)query;
- (void)removeAllEntities;
@end

@class KNVUser;
@class NSURL;
@class KNVPush;

SWIFT_CLASS_NAMED("Client")
@interface KNVClient : NSObject
+ (KNVClient * __nonnull)sharedClient;
@property (nonatomic, readonly, strong) KNVUser * __nullable activeUser;
@property (nonatomic, readonly, copy) NSString * __nullable appKey;
@property (nonatomic, readonly, copy) NSString * __nullable appSecret;
@property (nonatomic, readonly, strong) NSURL * __nonnull apiHostName;
@property (nonatomic, readonly, strong) NSURL * __nonnull authHostName;
@property (nonatomic) NSURLRequestCachePolicy cachePolicy;
@property (nonatomic) NSTimeInterval timeoutInterval;
@property (nonatomic, copy) NSString * __nullable clientAppVersion;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * __nonnull customRequestProperties;
+ (NSURL * __nonnull)defaultApiHostName;
+ (NSURL * __nonnull)defaultAuthHostName;
@property (nonatomic, readonly, strong) KNVPush * __null_unspecified push;
@property (nonatomic) SWIFT_METATYPE(KNVUser) __nonnull userType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (void)initialize;
- (nonnull instancetype)initWithAppKey:(NSString * __nonnull)appKey appSecret:(NSString * __nonnull)appSecret apiHostName:(NSURL * __nonnull)apiHostName authHostName:(NSURL * __nonnull)authHostName;
- (KNVClient * __nonnull)initializeWithAppKey:(NSString * __nonnull)appKey appSecret:(NSString * __nonnull)appSecret apiHostName:(NSURL * __nonnull)apiHostName authHostName:(NSURL * __nonnull)authHostName;
@property (nonatomic, readonly, copy) NSString * __nullable authorizationHeader;
@end


SWIFT_CLASS_NAMED("Constants")
@interface KNVConstants : NSObject
+ (NSString * __nonnull)PersistableIdKey;
+ (NSString * __nonnull)PersistableAclKey;
+ (NSString * __nonnull)PersistableMetadataKey;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class KNVMetadata;
@class NSDate;

SWIFT_CLASS_NAMED("File")
@interface KNVFile : NSObject
@property (nonatomic, copy) NSString * __nullable fileId;
@property (nonatomic, copy) NSString * __nullable fileName;
@property (nonatomic, copy) NSString * __nullable mimeType;
@property (nonatomic) BOOL publicAccessible;
@property (nonatomic, strong) KNVAcl * __nullable acl;
@property (nonatomic, strong) KNVMetadata * __nullable metadata;
@property (nonatomic, strong) NSURL * __nullable downloadURL;
@property (nonatomic, strong) NSDate * __nullable expiresAt;
@end


SWIFT_CLASS_NAMED("HttpRequest")
@interface KNVHttpRequest : NSObject
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL canceled;
- (void)cancel;
@end


SWIFT_PROTOCOL_NAMED("JsonObject")
@protocol KNVJsonObject
@optional
- (void)fromJson:(NSDictionary<NSString *, id> * __nonnull)json;
- (NSDictionary<NSString *, id> * __nonnull)toJson;
@end


SWIFT_CLASS_NAMED("Metadata")
@interface KNVMetadata : NSObject
+ (NSString * __nonnull)LmtKey;
+ (NSString * __nonnull)EctKey;
+ (NSString * __nonnull)AuthTokenKey;
@property (nonatomic, strong) NSDate * __nullable lmt;
@property (nonatomic, strong) NSDate * __nullable ect;
@property (nonatomic, readonly, copy) NSString * __nullable authtoken;
- (nonnull instancetype)initWithLmt:(NSString * __nullable)lmt ect:(NSString * __nullable)ect authtoken:(NSString * __nullable)authtoken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithJson:(NSDictionary<NSString *, id> * __nonnull)json;
- (NSDictionary<NSString *, id> * __nonnull)toJson;
@end


@interface NSData (SWIFT_EXTENSION(Kinvey))
@end


@interface NSDate (SWIFT_EXTENSION(Kinvey))
@end


SWIFT_PROTOCOL_NAMED("Persistable")
@protocol KNVPersistable <KNVJsonObject, NSObject>
+ (NSString * __nonnull)kinveyCollectionName;
+ (NSDictionary<NSString *, NSString *> * __nonnull)kinveyPropertyMapping;
@end

@class UIApplication;
@class NSError;

SWIFT_CLASS_NAMED("Push")
@interface KNVPush : NSObject
- (void)registerForPush;
- (void)application:(UIApplication * __nonnull)application didFailToRegisterForRemoteNotificationsWithError:(NSError * __nonnull)error;
- (void)application:(UIApplication * __nonnull)application didReceiveRemoteNotification:(NSDictionary * __nonnull)userInfo;
@end

@class NSPredicate;
@class NSSortDescriptor;

SWIFT_CLASS_NAMED("Query")
@interface KNVQuery : NSObject
@property (nonatomic, strong) NSPredicate * __nullable predicate;
@property (nonatomic, copy) NSArray<NSSortDescriptor *> * __nullable sortDescriptors;
- (nonnull instancetype)initWithPredicate:(NSPredicate * __nullable)predicate sortDescriptors:(NSArray<NSSortDescriptor *> * __nullable)sortDescriptors OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFormat:(NSString * __nonnull)format argumentArray:(NSArray * __nullable)argumentArray;
@end


@interface KNVQuery (SWIFT_EXTENSION(Kinvey))
@end


SWIFT_CLASS_NAMED("User")
@interface KNVUser : NSObject
+ (NSString * __nonnull)PersistableUsernameKey;
@property (nonatomic, readonly, copy) NSString * __nonnull userId;
@property (nonatomic, readonly, strong) KNVAcl * __nullable acl;
@property (nonatomic, readonly, strong) KNVMetadata * __nullable metadata;
@property (nonatomic, copy) NSString * __nullable username;
@property (nonatomic, copy) NSString * __nullable email;
+ (void)resetPasswordWithUsername:(NSString * __nonnull)username client:(KNVClient * __nonnull)client;
+ (void)forgotUsernameWithEmail:(NSString * __nonnull)email client:(KNVClient * __nonnull)client;
- (nonnull instancetype)initWithUserId:(NSString * __nonnull)userId acl:(KNVAcl * __nullable)acl metadata:(KNVMetadata * __nullable)metadata client:(KNVClient * __nonnull)client OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithJson:(NSDictionary<NSString *, id> * __nonnull)json client:(KNVClient * __nonnull)client OBJC_DESIGNATED_INITIALIZER;
- (NSDictionary<NSString *, id> * __nonnull)toJson;
- (void)logout;
@property (nonatomic, readonly, copy) NSString * __nullable authorizationHeader;
@end

#pragma clang diagnostic pop