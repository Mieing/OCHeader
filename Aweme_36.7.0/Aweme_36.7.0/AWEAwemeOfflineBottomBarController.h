@class AWEAwemeOfflineBottomBarContext, NSString, AWEAwemeOfflineBottomView;

@interface AWEAwemeOfflineBottomBarController : NSObject <AWEAwemeOfflineBottomViewDidClickButtonDelegate, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) AWEAwemeOfflineBottomView *bottomBarView;
@property (retain, nonatomic) AWEAwemeOfflineBottomBarContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)onSettingButtonActionWithType:(id)a0;
- (void).cxx_destruct;
- (Class)contextClass;

@end
