@class UIView, NSString, MMFinderLiveTask, UIImageView, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, UILabel, MMUIButton;

@interface MMFinderLiveFansGroupJoinSuperfanPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMUIButton *introductionButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceDescLabel;
@property (retain, nonatomic) UILabel *rightsDetailLabel;
@property (retain, nonatomic) UIImageView *wecoinImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) MMUIButton *joinButton;
@property (nonatomic) unsigned long long openScene;
@property (copy, nonatomic) id /* block */ onJoinSuperfanCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 openScene:(unsigned long long)a1;
- (void)setupPageSheetConfig;
- (void)initUI;
- (void)layoutSubviews;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)onIntroductionButtonClicked;
- (void)onJoinButtonClicked;
- (void)gotoDetailPage;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)reportPanelExpose;
- (void)reportJoinButtonClick;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
