@class UILabel, UIButton, UISwitch;
@protocol IESLiveResolutionHDRSwitchViewDelegate;

@interface IESLiveResolutionHDRSwitchView : UIView

@property (retain, nonatomic) UILabel *hdrLabel;
@property (retain, nonatomic) UIButton *hdrInfoButton;
@property (retain, nonatomic) UILabel *hdrIntroduceLabel;
@property (retain, nonatomic) UISwitch *hdrSwitch;
@property (weak, nonatomic) id<IESLiveResolutionHDRSwitchViewDelegate> delegate;

- (void)p_layoutSubView;
- (void)p_onInfoButtonTapped:(id)a0;
- (void)p_onSwitchTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
