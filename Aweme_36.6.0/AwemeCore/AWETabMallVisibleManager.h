@class NSString, NSMutableArray;

@interface AWETabMallVisibleManager : NSObject <AWEBizTabBarMessage, AWEBizTabBarLifeCycleMessage, HTSService, AWETabMallVisibleManagerProtocol>

@property (nonatomic) BOOL isHomePageTopMall;
@property (nonatomic) BOOL atTopTab;
@property (nonatomic) BOOL atBottomTab;
@property (nonatomic) BOOL lastState;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL visible;

+ (id)sharedManager;

- (void)defaultLandingTab;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (void)handleAppBecomeActive;
- (void)slideIn;
- (void)slideOut;
- (void)registerVisibleDelegate:(id)a0;
- (void)landToMall;
- (void)unRegisterVisibleDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setVisible:(BOOL)a0;
- (void)dealloc;
- (void)setup;
- (void)handleAppWillResignActive;

@end
