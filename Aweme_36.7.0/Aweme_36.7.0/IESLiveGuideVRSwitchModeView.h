@class HTSEventContext, UIImageView, UIView, UILabel, UITapGestureRecognizer;

@interface IESLiveGuideVRSwitchModeView : UIView

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *fisheyeIcon;
@property (retain, nonatomic) UILabel *switchLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (id)initWithTrackContext:(id)a0;
- (void)trackVRCameraSwitchItemClickType:(id)a0;
- (void)switchViewTypeWithVRMode;
- (void).cxx_destruct;
- (void)setupUI;

@end
