@class ACCAnimatedButton, UIImageView, UIView;
@protocol AWEVideoClipSwitchModeViewDelegate;

@interface AWEVideoClipSwitchModeView : UIView

@property (retain, nonatomic) ACCAnimatedButton *AIModeButton;
@property (retain, nonatomic) ACCAnimatedButton *normalModeButton;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIImageView *triangleIndicator;
@property (nonatomic) unsigned long long clipMode;
@property (copy, nonatomic) id /* block */ didSwitchModeBlock;
@property (weak, nonatomic) id<AWEVideoClipSwitchModeViewDelegate> delegate;

- (void)p_didClickModeButton:(id)a0;
- (id)p_buttonForMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
