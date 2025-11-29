@class BDSCGradientView;

@interface BDSCControlButton : BDSCButton

@property (retain, nonatomic) BDSCGradientView *gradientView;
@property (nonatomic) BOOL shouldSetGradientLayer;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (nonatomic) BOOL inGreyMode;

- (void)setupGradientLayer;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
