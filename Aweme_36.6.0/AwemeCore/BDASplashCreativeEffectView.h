@class NSDictionary, NSMutableArray;
@protocol BDASplashComplianceBaseDelegate;

@interface BDASplashCreativeEffectView : UIView

@property (copy, nonatomic) NSDictionary *config;
@property (weak, nonatomic) id<BDASplashComplianceBaseDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *imageArray;

- (void)onClickGesture:(id)a0;
- (void)splashClickWithPoint:(struct CGPoint { double x0; double x1; })a0 isValid:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)setupView;

@end
