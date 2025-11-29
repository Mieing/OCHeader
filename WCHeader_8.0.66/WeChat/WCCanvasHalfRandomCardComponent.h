@class UIView, NSString, WCCanvasComponentHalfRandomCardItemInfo, WCCanvasDynamicDataLoader, WCCanvasHalfRandomSubCard, WCAdURLImageView, WCAdvertiseInfo, UILabel;

@interface WCCanvasHalfRandomCardComponent : WCCanvasComponent <WCCanvasDynamicDataLoaderDelegate, CAAnimationDelegate, WCCanvasHalfRandomSubCardDelegate>

@property (readonly, nonatomic) WCAdvertiseInfo *advertiseInfo;
@property (retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader;
@property (nonatomic) unsigned long long cardState;
@property (retain, nonatomic) WCAdURLImageView *bgImageView;
@property (retain, nonatomic) WCAdURLImageView *cardImageView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *subTitleView;
@property (retain, nonatomic) UIView *animationContainer;
@property (retain, nonatomic) WCAdURLImageView *animationImgView;
@property (retain, nonatomic) WCCanvasComponentHalfRandomCardItemInfo *theChosenItemInfo;
@property (retain, nonatomic) WCCanvasHalfRandomSubCard *theChosenSubCardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)layoutSubviews;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)a0;
- (void)updateSubCardViewWithCardId:(id)a0;
- (id)findADefaultCardToShow;
- (BOOL)isComponentSubCardReady;
- (id)getUxInfoWithShared:(BOOL)a0;
- (struct CGSize { double x0; double x1; })getBgImageViewSize;
- (BOOL)isGivenCardIdValid:(id)a0;
- (void)pickACardToShow;
- (void)tryToFetchRandomCardId;
- (void)onFetchTwistCardId:(id)a0 cardExtInfo:(id)a1 componentExtInfo:(id)a2;
- (void)updateRedPacketCoverUrl:(id)a0 forCardId:(id)a1;
- (void)startPreAnimationIfNeed;
- (void)tryToShowPickCardAnimation;
- (void)startRotateAnimationWithFlip:(BOOL)a0;
- (void)startRotateAnimationWithFlip;
- (void)startRotateAnimation;
- (void)tryToShowTheChosenCardWithFlipAnim:(BOOL)a0;
- (void)tryToShowTheChosenCardWithFlip;
- (void)tryToShowTheChosenCard;
- (void)changeAlignmentRightAndLeft:(id)a0;
- (void)onRandomCardChooseAnimationEnd;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)onSubCardShouldShowBulletCommentsView;
- (id)onSubCardFetchBulletCommentsTitle;
- (id)onSubCardFetchBulletCommentsForBulletCommentsType:(long long)a0;
- (id)onSubCardFetchCanvasPageId;
- (int)onSubCardFetchCanvasFinderCommentScene;
- (id)fetchHalfScreenJumpInfo;
- (BOOL)shouldShowBulletCommentsView;
- (void)doGetCardIdResultReportWithResult:(BOOL)a0 cardId:(id)a1;
- (void)doShowSpecialRedEnvelopeItemReportWithCardId:(id)a0 isLastCard:(BOOL)a1;
- (void).cxx_destruct;

@end
