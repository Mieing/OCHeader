@class NSString;

@interface AWEAdCommonAdapterDOUYIN : NSObject <AWEAdCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowDOUPlusEntrance:(long long)a0;
+ (id)getDouPlusAdCooperationParamsFromEnter:(id)a0;
+ (id)getDouPlusIAPPrefix;
+ (BOOL)shouldShowLocalRec;
+ (BOOL)shouldCurrentTargetShowBiddingTopView;
+ (id)getCurrentTargetSplashLogo;
+ (id)getCurrentTargetSplashChannel;
+ (BOOL)shouldOpenSplashInitTask;
+ (BOOL)shouldShowOperationSplash;
+ (BOOL)shouldShowDouPlusXiaoDianEntrance;
+ (id)getLandPageMannorScene;
+ (BOOL)isAdLaunchTaskStable;
+ (id)playableStuckCheckSettings;
+ (id)getPlayletAdRitDic;
+ (id)getCommentMannorScene;
+ (id)getSearchCommentMannorScene;
+ (id)getFeedMannorScene;
+ (id)getSearchMannorScene;
+ (id)getSearchAdMannorScene:(BOOL)a0;
+ (id)getCurrentTargetCommerceChannelBackupCDNUrl;
+ (id)getCurrentTargetCommerceChannel;
+ (BOOL)checkIsLite;
+ (Class)aAWECommerceModuleServiceDOUYINHMAdapterClass;

- (id)aAWECommerceModuleServiceDOUYINHMAdapter;

@end
