@class UIImageView, UIScrollView, UILabel, UIButton;
@protocol MMFinderLiveSwitchStreamGuidePanelDelegate;

@interface MMFinderLiveSwitchStreamGuidePanel : MMPageSheetBaseView

@property (retain, nonatomic) UIScrollView *scrollContainerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *localAudioModeButton;
@property (retain, nonatomic) UIButton *switchVideoStreamButton;
@property (weak, nonatomic) id<MMFinderLiveSwitchStreamGuidePanelDelegate> actionDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configAllSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onLocalAudioModeButtonClicked;
- (void)onSwitchVideoStreamButtonClicked;
- (void).cxx_destruct;

@end
