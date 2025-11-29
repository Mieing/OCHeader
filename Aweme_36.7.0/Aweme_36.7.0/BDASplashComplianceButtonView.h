@class NSDictionary;

@interface BDASplashComplianceButtonView : UIView

@property (retain, nonatomic) NSDictionary *extraSize;

- (BOOL)checkPointIsValid:(struct CGPoint { double x0; double x1; })a0;
- (void)loadClickExtraSize:(id)a0;
- (id)loadBreathAnimation:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
