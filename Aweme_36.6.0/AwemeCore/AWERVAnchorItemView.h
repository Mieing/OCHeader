@class UIImageView, UILabel, UIGestureRecognizer;

@interface AWERVAnchorItemView : UIView

@property (weak, nonatomic) UIGestureRecognizer *ges;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL disableTap;
@property (copy, nonatomic) id /* block */ tapHandler;

- (void)configWithIconUrls:(id)a0 defaultIcon:(id)a1 content:(id)a2 attributeContent:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
