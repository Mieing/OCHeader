@class NSString, NSMutableArray;

@interface AWEPluginLocationManagerImpl : NSObject <BDPLocationManagerPluginDelegate>

@property (retain, nonatomic) NSMutableArray *requestAuthCallbacks;
@property (retain, nonatomic) NSMutableArray *getLocationTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (id)errorWithErrorCode:(long long)a0 errorMsg:(id)a1;

- (void)handleApplicationEnterBackground;
- (void)stopRequestingLoationWithLoation:(id)a0 error:(id)a1;
- (void)addGetLocationTaskWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)startRequestingLoation;
- (void)updateLocationAccessStatus:(BOOL)a0;
- (BOOL)isAuthorizedOrIncludeNotDetermined:(BOOL)a0;
- (void)getLocationWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)requestAuthorizationWithCompletion:(id /* block */)a0;

@end
