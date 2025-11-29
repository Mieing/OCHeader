@class UILabel, IESLiveImageView;

@interface IESLiveBeautyCrowdTestModeSelectedView : UIView

@property (retain, nonatomic) UILabel *currentMode;
@property (retain, nonatomic) IESLiveImageView *icon;

- (void)updateSelectWithModeName:(id)a0;
- (id)initWithModeName:(id)a0;
- (void)showPanelViewWithContainerView:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
