@class NSCache, NSString;

@interface AWEIMFansCreatorRedpacketManager : NSObject <IESIMFansCreatorRedpacketInterface>

@property (retain, nonatomic) NSCache *userRoleIDsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)__clearCache;
- (void)__cacheInit;
- (id)roleIDsWithUserID:(id)a0;
- (void)cacheRoleIDs:(id)a0 withUserID:(id)a1;
- (void)removeCachedRoleIDsWithUserID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
