@class BDSCGradientView, UILabel, NSString;

@interface BDSCControlButtonV2 : BDSCButton

@property (retain, nonatomic) BDSCGradientView *gradientView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *mainTextLabel;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL shouldSetGradientLayer;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (nonatomic) BOOL inGreyMode;

- (void)setupGradientLayer;
- (void)updateBigStyle:(BOOL)a0;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
