@interface AWELongVideoRTSVideoTryWatchView : UIView <AWEVideoRTSTryWatchViewProtocol, AWEVideoTryWatchViewProtocol> {
    void /* function */ onClickedBlock;
    void /* unknown type, empty encoding */ paymentPreviewTagViewModel;
    void /* unknown type, empty encoding */ viewBuilder;
}

@property (nonatomic, copy) id /* block */ onClickedBlock;
@property (nonatomic) BOOL isVIPVideo;

- (void)updateContainerHeight:(double)a0;
- (void)updateArrowSizeWH:(double)a0;
- (void)updateStartTime:(double)a0 endTime:(double)a1;
- (void)updateCurrentTime:(double)a0;
- (void)purchaseComplete;
- (void)showContainerView;
- (void)updateLeftBackgroundColor:(id)a0;
- (void)updatePurchaseLabelText:(id)a0;
- (void)updatePayLabelTextColor:(id)a0;
- (void)updatePayLabelText:(id)a0;
- (void)updateTryWatchLabelText:(id)a0;
- (void)setRightTitle:(id)a0 width:(double)a1;
- (void)setArrowColor:(id)a0;
- (void)updateTimePreText:(id)a0;
- (void)updateTimeEndText:(id)a0;
- (void)updateTimeDecorationText:(id)a0;
- (void)adjustWidthRightTryWatchLabel:(BOOL)a0;
- (void)updateOnlyShowCountDown;
- (void)removePayLabel;
- (void)reset;
- (void)setRightTitleColor:(id)a0;
- (void)setTextFontSize:(double)a0;
- (void)onStartPreviewWithIsFirstStart:(BOOL)a0 remainDuration:(long long)a1 currentPosition:(long long)a2;
- (void)onPreviewingWithRemainDuration:(long long)a0 currentPosition:(long long)a1;
- (void)onPreviewEndWithIsFirstEnd:(BOOL)a0 isDirectEnd:(BOOL)a1 isPreview:(BOOL)a2;
- (id)initWithViewStyle:(long long)a0 updateViewStyle:(long long)a1;
- (id)initWithUIConfig:(id)a0 updateViewStyle:(long long)a1 tryWatchType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
