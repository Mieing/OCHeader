@class YYLabel, UIImageView, NSAttributedString;

@interface AWEInteractionDescriptionLabelTruncationView : UIView

@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) NSAttributedString *attributeText;

- (id)initWithAttributeText:(id)a0 icon:(id)a1;
- (id)defaultAttributedtext;
- (double)iconSizeWH;
- (id)createPlainTextTailLabelWithAttributedText:(id)a0;
- (id)expandTagFont;
- (id)initWithAttributeText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
