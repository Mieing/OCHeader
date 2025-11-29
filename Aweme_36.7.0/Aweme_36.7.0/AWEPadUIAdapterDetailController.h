@interface AWEPadUIAdapterDetailController : AWEAwemeNewDetailBaseController

@property (nonatomic) long long beforeTransitionRow;
@property (nonatomic) double lastHeight;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadDetailTableAdapterClass;
+ (Class)aAWEPadMixVideoAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEPadDetailTableAdapter;
- (id)activeBottomBar;
- (id)aAWEPadMixVideoAdapter;
- (BOOL)currentVCRotateEnable;
- (id)bottomBarAlignView;
- (BOOL)enableFixDetailTableViewCellHeight;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewWillLayoutSubviews;

@end
