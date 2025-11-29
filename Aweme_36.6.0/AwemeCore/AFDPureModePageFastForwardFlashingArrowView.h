@class UIImageView, NSString;

@interface AFDPureModePageFastForwardFlashingArrowView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *leftArrow;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) double arrowViewWidth;
@property (nonatomic) double arrowViewHeight;
@property (nonatomic) double arrowViewInterval;
@property (nonatomic) long long forwardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playFastSpeedCycleAnimation;
- (id)initWithFastForwardType:(long long)a0 iconName:(id)a1 arrowWidth:(double)a2 arrowHeight:(double)a3 arrowInterval:(double)a4;
- (id)initWithFastForwardType:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addArrowWithForwardType:(long long)a0;
- (double)arrowWidth;
- (double)arrowInterval;
- (void)fastFowardCycleAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)arrowHeight;
- (void)updateUI;

@end
