@class NSArray, NSString, UIImage, UIImageView, UILabel, UIView;

@interface AWEScalableActionButton : UIButton

@property (retain, nonatomic) NSArray *scales;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *expansionIconImage;
@property (retain, nonatomic) UIImage *constrictionIconImage;
@property (nonatomic) BOOL isBodyAnimating;
@property (retain, nonatomic) NSArray *circleLayers;
@property (nonatomic) BOOL isHideHighlightImage;
@property (nonatomic) unsigned long long currentActionButtonState;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double expansionDiameter;
@property (nonatomic) double constrictionDiameter;
@property (retain, nonatomic) UIView *containerView;

- (void)expansionAnimation;
- (id)scale:(id)a0 origin:(id)a1 durTimes:(float)a2 repeatTimes:(float)a3 shouldReverse:(BOOL)a4 animationFunctionName:(id)a5;
- (void)constrictionAnimation;
- (id)initWithCircleImages:(id)a0 animationScales:(id)a1 backgroundColor:(id)a2 textColor:(id)a3 expansionIconImage:(id)a4 constrictionIconImage:(id)a5 labelText:(id)a6 expansionDiameter:(double)a7 constrictionDiameter:(double)a8;
- (void)tranformToExpansionWithMakeConstraintBlock:(id /* block */)a0;
- (void)tranformToConstrictionWithMakeConstraintBlock:(id /* block */)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
