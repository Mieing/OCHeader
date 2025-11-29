@class NSString;

@interface AWENativeAppDevelopModeServiceManage : NSObject <AWEUserMessage>

@property (nonatomic) BOOL isColdBootAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowDevModeEntrance;
+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)trackDevelopModeSwitchWithIsOn:(BOOL)a0 userOpen:(BOOL)a1 appCount:(long long)a2;
- (void)refreshTestTimorList;
- (void)trackDevelopAppLaunch;
- (id)init;
- (void)dealloc;

@end
