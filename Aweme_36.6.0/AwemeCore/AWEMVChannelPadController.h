@class NSString;

@interface AWEMVChannelPadController : AWEDCFeedBaseController <AWEMVChannelPadControllerProtocol>

@property (nonatomic) double lastWidth;
@property (nonatomic) BOOL isTransiting;
@property (nonatomic) struct CGSize { double width; double height; } lastCellLayoutSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearSectionViewModelsHeight;
- (id)padConfig;
- (void)refreshCellLayoutIfNeeded;
- (void)dispatchCellScreenWillRotate;
- (void)dispatchCellScreenDidRotate;
- (void)handleViewBreakPointDidChange;
- (void)triggerStartPlayForLargeCard;
- (void)containerViewWillLayoutSubviews;
- (void)containerViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)containerViewDidLayoutSubviews;

@end
