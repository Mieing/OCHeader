@class UIView, MMLiveTaskId, MMFinderLiveTask, CAGradientLayer, MMFinderLiveLandscapeBarrageParamCardItemView, MMUILabel, MMUIButton, UIScrollView;

@interface MMFinderLiveLandscapeBarrageSettingPanel : MMPageSheetBaseView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *gradientBackView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) MMFinderLiveLandscapeBarrageParamCardItemView *rangeParamCardItem;
@property (retain, nonatomic) MMFinderLiveLandscapeBarrageParamCardItemView *displayParamCardItem;
@property (copy, nonatomic) id /* block */ settingPanelCloseCallback;

- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)initPageSheetConfig;
- (void)initNotifications;
- (void)initUI;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentViewWidth;
- (double)contentViewHeight;
- (double)getNavHeaderHeight;
- (void)layoutGradientBackView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (void)layoutContentScrollView;
- (double)getContentScrollViewHeight;
- (void)updateContentScrollContentSize;
- (void)layoutRangeParamCardItem;
- (void)layoutDisplayParamCardItem;
- (id)createParamCard:(unsigned long long)a0;
- (void)onCloseAction;
- (void)handleUIOrientationChanged:(id)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
