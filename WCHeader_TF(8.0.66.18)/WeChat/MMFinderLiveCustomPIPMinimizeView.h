@class NSString, MMFinderLiveCustomPIPMinimizeIndicatorContainerView, MMLiveTaskId, UIView;
@protocol MMFinderLivePIPMinimizeLogicDelegate, MMFinderLivePIPMinimizeLogicControllerDelegate, MMFinderLivePIPMinimizeDisplayViewProtocol;

@interface MMFinderLiveCustomPIPMinimizeView : UIView <MMLiveCustomRenderPIPViewProtocol>

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveCustomPIPMinimizeIndicatorContainerView *indicatorContainerView;
@property (weak, nonatomic) UIView<MMFinderLivePIPMinimizeDisplayViewProtocol> *displayContentView;
@property (copy, nonatomic) id /* block */ getIndicatorStateBlock;
@property (weak, nonatomic) id<MMFinderLivePIPMinimizeLogicControllerDelegate> logicControllerDelegate;
@property (weak, nonatomic) id<MMFinderLivePIPMinimizeLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDisplayContentView;
- (void)layoutIndicatorContainerView;
- (void)attachContentViewToMinimizeContainer;
- (void)dismissLiveViewFromMinimizeContainer;
- (void)updateDisplayContentView:(id)a0;
- (void)displayIndicators;
- (void)hideIndicators;
- (void)onViewWillAttachToPIPContainer;
- (void)onViewDidDeAttachFromPIPContainer;
- (void)setIndicatorState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
