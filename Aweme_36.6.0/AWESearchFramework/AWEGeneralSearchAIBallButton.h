@class NSString, UIImageView, NSURL, UILabel;

@interface AWEGeneralSearchAIBallButton : UIView

@property (retain, nonatomic) UIImageView *AIIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSURL *AIBallURL;
@property (retain, nonatomic) NSString *AIBallText;
@property (nonatomic) unsigned long long defaultState;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ didClickBlock;

- (void)didClickButton;
- (void)updateWithConfig:(id)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
