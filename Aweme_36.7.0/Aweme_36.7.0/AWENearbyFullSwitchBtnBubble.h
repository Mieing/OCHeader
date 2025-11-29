@class NSString, UIImageView, UILabel, UIView;

@interface AWENearbyFullSwitchBtnBubble : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *bubble;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UILabel *bubbleBtn;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ clickBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tap;

@end
