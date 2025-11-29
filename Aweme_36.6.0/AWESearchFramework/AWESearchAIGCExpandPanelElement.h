@class NSString, UIImage, UILabel, UIButton;

@interface AWESearchAIGCExpandPanelElement : UIView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (id)albumElementWithClickBlock:(id /* block */)a0;
+ (id)cameraElementWithClickBlock:(id /* block */)a0;

- (void)clickButton:(id)a0;
- (id)initWithText:(id)a0 image:(id)a1 clickBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)updateSubviews;

@end
