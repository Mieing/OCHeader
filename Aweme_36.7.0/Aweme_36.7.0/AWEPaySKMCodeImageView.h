@class UIImageView;

@interface AWEPaySKMCodeImageView : UIImageView

@property (nonatomic) double codeWidth;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIImageView *dyLogo;

- (id)initWithQRCodeUrl:(id)a0 codeWidth:(double)a1;
- (id)initWithQRCodeImage:(id)a0 codeWidth:(double)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
