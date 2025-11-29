@class WCFinderLandScapePlayCompleteCoverInfoView, MMTimer, NSString, WCFinderDataItem, RichTextView, MMUIButton;
@protocol WCFinderLandScapePlayCompleteTipsViewDelegate;

@interface WCFinderLandScapePlayCompleteTipsView : MMUIView <WCFinderLandScapePlayCompleteCoverInfoViewDelegate>

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderLandScapePlayCompleteCoverInfoView *coverView;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) RichTextView *recommentReasonLabel;
@property (retain, nonatomic) MMUIButton *replayBtn;
@property (retain, nonatomic) MMUIButton *returnBtn;
@property (retain, nonatomic) MMTimer *countdownTimer;
@property (nonatomic) long long curCountdownNum;
@property (nonatomic) int scene;
@property (weak, nonatomic) id<WCFinderLandScapePlayCompleteTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (void)setupViewLandScapeState;
- (void)updateWithDataItem:(id)a0;
- (id)getRecommentReasonStr:(id)a0;
- (void)startCountdown;
- (void)updateCountTimer;
- (void)stopCountdownAction;
- (void)landScapeStateWillChange:(BOOL)a0;
- (void)reportShowAction;
- (void)onClickReturnBtn;
- (void)onClickReplayBtn;
- (void)onClickPlayNextBtn;
- (void)layoutSubviews;
- (double)recommentReasonBottomMargin;
- (double)coverRightMargin;
- (double)coverTopMargin;
- (double)replayBtnBottomMargin;
- (double)centerContentLRMargin;
- (double)descLabelFWidthWithCoverViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)recommentReasonFont;
- (id)descLabelFont;
- (struct CGSize { double x0; double x1; })replayBtnSize;
- (id)replayBtnFont;
- (double)replayBtnHorizonSpacing;
- (struct CGSize { double x0; double x1; })coverViewSize;
- (struct CGSize { double x0; double x1; })coverViewSizeThatFitHeight:(double)a0;
- (void)onTapFinderLandScapePlayCompleteCoverInfoView;
- (void).cxx_destruct;

@end
