@class AFDRecommendVisibilitySettingHintView, AFDButton, AFDRecommendPanelFooterViewModel;
@protocol AFDRecommendPanelFooterViewDelegate;

@interface AFDRecommendPanelFooterView : UIView

@property (retain, nonatomic) AFDRecommendVisibilitySettingHintView *settingHintView;
@property (retain, nonatomic) AFDButton *recommendButton;
@property (retain, nonatomic) AFDRecommendPanelFooterViewModel *model;
@property (weak, nonatomic) id<AFDRecommendPanelFooterViewDelegate> delegate;

+ (double)heightWithType:(unsigned long long)a0;

- (void)setupUIForNewPanel;
- (void)didShowSettingsHintView;
- (void)trackSettingHintViewShow;
- (void)updateRecommendButtonWithModel:(id)a0;
- (void)trackRecommendVideoWithForCancelEvent:(BOOL)a0;
- (void)didClickRecommendButton;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
