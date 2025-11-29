@class UIImageView, NSString;

@interface IESECommerceSpeakerView : UIView

@property (retain, nonatomic) UIImageView *speakerImageView;
@property (copy, nonatomic) NSString *speakerImageName;
@property (copy, nonatomic) NSString *muteSpeakerImageName;
@property (nonatomic) BOOL isMute;

- (void)setUpSubViews;
- (void)setSpeakerViewImageName:(id)a0 muteImageName:(id)a1 isMute:(BOOL)a2;
- (void)updateSpeakerViewBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
