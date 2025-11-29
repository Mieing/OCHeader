@class UIImageView, UITapGestureRecognizer;

@interface AWEPayVolumeControlView : UIView

@property (retain, nonatomic) UIImageView *muteIcon;
@property (retain, nonatomic) UIImageView *noMuteIcon;
@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (copy, nonatomic) id /* block */ volumeBlock;

- (void)p_mute:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)p_init;

@end
