@class AWEUILoadingView, AWEPreLoginDataController;

@interface AWELastTrustAccountManger : NSObject

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEPreLoginDataController *dataController;
@property (nonatomic) long long trustUsersCountFromServer;

+ (BOOL)enableShowOnekeyLogin;
+ (void)enterLoginProcessWithCompletion:(id /* block */)a0 scene:(unsigned long long)a1;
+ (void)enableShowUserOneKeyLogin:(id /* block */)a0;
+ (void)enableShowTrustUserOneKeyLogin:(id /* block */)a0;
+ (unsigned long long)getLastLoginWayWithPlatform:(unsigned long long)a0;
+ (id)sharedInstance;

- (id)trustSharedUser;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
