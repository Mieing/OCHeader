@class UIImageView, UILabel;

@interface WCFinderDynamicLabelButton : UIButton

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 text:(id)a2;
- (void)updateTextWithContent:(id)a0;
- (void)updateImageWithNormal:(id)a0 selected:(id)a1 liked:(BOOL)a2;
- (void).cxx_destruct;

@end
