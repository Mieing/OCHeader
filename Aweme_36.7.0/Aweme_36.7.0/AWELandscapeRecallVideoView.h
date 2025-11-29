@class NSTimer, UIImageView, UILabel, UIView, UIButton;

@interface AWELandscapeRecallVideoView : UIView

@property (retain, nonatomic) UIView *vacantContainer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long count;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ swipUpAction;

- (void)configUI;
- (void)closeAction:(id)a0;
- (void)addGesture;
- (void)starCountDown;
- (void)hideSwipTip;
- (void)swipAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
