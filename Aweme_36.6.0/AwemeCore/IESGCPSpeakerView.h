@class UIImageView, NSString;

@interface IESGCPSpeakerView : UIView

@property (retain, nonatomic) UIImageView *speakerImageView;
@property (retain, nonatomic) NSString *muteImageName;
@property (retain, nonatomic) NSString *nonMuteImageName;
@property (nonatomic) BOOL isMute;
@property (copy, nonatomic) id /* block */ didTap;
@property (nonatomic) double responseArea;

- (void)didClicked;
- (void)setUpSubViews;
- (id)initWithMuteImageName:(id)a0 nonMuteImageName:(id)a1;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
