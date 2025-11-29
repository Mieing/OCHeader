@class WCCanvasComponent, WCAdURLImageView, WCCanvasComponentItem;

@interface WCCanvasRandomLayout : WCCanvasFrameLayout

@property (retain, nonatomic) WCCanvasComponentItem *theChosenItem;
@property (retain, nonatomic) WCCanvasComponent *theChosenComponent;
@property (nonatomic) unsigned long long pendingState;
@property (retain, nonatomic) WCAdURLImageView *brandNewCollectionCoverImgView;
@property (retain, nonatomic) WCAdURLImageView *brandNewCollectionBackImgView;
@property (retain, nonatomic) WCAdURLImageView *recollectedCoverImgView;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (void)canvasCloseBtnClick;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)a0;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (void)shareComponentDidBeClickedWithType:(long long)a0;
- (void)componentUpdateCardViewsWithPendingState;
- (void)componentCleanCardViewsForce;
- (void)resetCardViewsForUnknownPendingState;
- (void)appendOpacityAnimationToView:(id)a0;
- (unsigned long long)fetchRemainCardsCount;
- (BOOL)isARedEnvelopGiveCardPicked;
- (BOOL)isARedEnvelopReceiveCardPicked;
- (BOOL)isPreviousClickedIndexInvalid;
- (void)tryToShowToastWithState:(unsigned long long)a0;
- (void)tryToShowToastWithWording:(id)a0;
- (void).cxx_destruct;

@end
