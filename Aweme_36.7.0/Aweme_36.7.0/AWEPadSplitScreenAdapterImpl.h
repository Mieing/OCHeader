@class NSString, NSMutableDictionary;

@interface AWEPadSplitScreenAdapterImpl : NSObject <AWEPadSplitScreenAdapter>

@property (retain, nonatomic) NSMutableDictionary *sceneMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPadSplitScreenAdapter;
+ (Class)weakTargetClass;
+ (BOOL)enable;
+ (id)sharedInstance;

- (BOOL)enableSplitScreenWithReferString:(id)a0;
- (void)addSplitWrapControllerWithViewControllerIfNeeded:(id)a0;
- (void)openSplitWithContainer:(id)a0 secondaryController:(id)a1 type:(long long)a2 enterMethod:(id)a3 animate:(BOOL)a4;
- (BOOL)checkSelfSplitViewControllerIsTopVC:(id)a0;
- (id)createSplitViewService;
- (id)createBizAdapterWithService:(id)a0 scene:(id)a1;
- (void)registerBizAdapterClass:(Class)a0 withScene:(id)a1;
- (BOOL)supportWinSpilt;
- (BOOL)supportGoodsDetailSpilt;
- (id)createSplitAnnieXViewControllerWithUrl:(id)a0;
- (BOOL)canSplitInCurrentScreenStatus;
- (BOOL)canSplitInCurrentScreenStatusWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)rightContainerWidth;
- (id)createSecondaryContent;
- (id)getSplitUrlFromUrl:(id)a0 splitParams:(id)a1 blackQueryKeys:(id)a2;
- (void)updateAdapterWithContainer:(id)a0 viewController:(id)a1 enterMethod:(id)a2 showType:(long long)a3;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)weakTarget;

@end
