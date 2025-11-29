@class UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol WCFinderPremovieAdPassButtonDelegate;

@interface WCFinderPremovieAdPassButton : UIView

@property (nonatomic) unsigned long long state;
@property (nonatomic) double fittingWidth;
@property (nonatomic) double fittingHeight;
@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *sepLineView;
@property (retain, nonatomic) UILabel *closeLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapInSelf;
@property (weak, nonatomic) id<WCFinderPremovieAdPassButtonDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)adjustUILayout;
- (void)updateCountDownProgress:(unsigned long long)a0;
- (void)tapInSelfAction;
- (void)doCountDown:(id)a0;
- (void)startCountDown:(unsigned long long)a0;
- (void)stopCountDown;
- (void)becomeClosable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adLabelFrame;
- (void).cxx_destruct;

@end
