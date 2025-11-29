@class UIButton, NSString, UIImageView, AWEGrootWelfareVideoBottomViewModel, UIView, UILabel, AWEScrollNumberView;
@protocol AWEFeedRecordSpeciesTipViewProtocol;

@interface AWEGrootWelfareVideoBottomView : AWEFeedRecordSpeciesTipView <AWEScrollNumberViewDelegate> {
    BOOL shouldCancelPreviousTouch;
    id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
}

@property (retain, nonatomic) AWEGrootWelfareVideoBottomViewModel *viewModel;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UIView *titleOutterContainer;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *tipLabelLeftPart;
@property (retain, nonatomic) UILabel *tipLabelRightPart;
@property (retain, nonatomic) AWEScrollNumberView *sunValueView;
@property (retain, nonatomic) AWEScrollNumberView *videoPlayTimeView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *donateBtn;
@property (nonatomic) BOOL isConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)configSubViews;
- (id)initWithEnterFrom:(id)a0 reactID:(id)a1 paramsDic:(id)a2;
- (void)setShouldCancelPreviousTouch:(BOOL)a0;
- (BOOL)shouldShowSpeciesTipView;
- (void)configWithModel:(id)a0 indexPath:(id)a1 isClickToEnter:(BOOL)a2;
- (BOOL)speciesTipViewInitializedConfiguration;
- (BOOL)shouldCancelPreviousTouch;
- (void)updateScrollViewWidth;
- (void)setupTitleContainer;
- (void)setupTitleOutterContainer;
- (BOOL)fixGrootWelfareLayout;
- (void)updateSubViewWhenReachMaxSunValue;
- (void)updateTitleOutterContainerAccessibility;
- (void)onClickCloseBtn;
- (void)onClickDonateBtn;
- (void)scrollNumberViewRowNumberDidChange;
- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToWindow;
- (void)setDelegate:(id)a0;

@end
