@class UIImageView;

@interface IESLiveDirectorVolumeView : UIView

@property (retain, nonatomic) UIImageView *microphoneImgView;
@property (nonatomic) long long currentMicrophoneState;

- (void)updateMicrophoneState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
