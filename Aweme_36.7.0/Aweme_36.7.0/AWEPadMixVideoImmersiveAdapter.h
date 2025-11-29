@class NSString;

@interface AWEPadMixVideoImmersiveAdapter : NSObject <AWEPadMixVideoImmersiveAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (BOOL)Enable;

- (void)updateImmersiveDetailControllerLayoutWithShowStatus:(BOOL)a0 animated:(BOOL)a1;
- (void)updateMixVideoContainerLayoutWithImmersiveShowStatus:(BOOL)a0;
- (void)performViewWillTransToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)closeMixVideoTableAutoresizeMaskWithReferString:(id)a0;
- (BOOL)closeImmersiveDetailViewAutoresizingMaskWithReferString:(id)a0;
- (BOOL)enablePadCustomActiveInCurrentTopViewController;
- (BOOL)mixPanelNeedShowWhenEnterMixVideoDetailVc;
- (id)weakTarget;

@end
