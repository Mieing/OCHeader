@class UIImageView, UIImage, UILabel, NSAttributedString;
@protocol LSIMImageTextVerticalViewDelegate;

@interface LSIMImageTextVerticalView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelEdgeInsets;
@property (nonatomic) BOOL isCenterX;
@property (weak, nonatomic) id<LSIMImageTextVerticalViewDelegate> delegate;
@property (copy, nonatomic) NSAttributedString *defaultAttrText;
@property (copy, nonatomic) NSAttributedString *switchOnAttrText;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *switchOnImage;
@property (nonatomic) BOOL changedAfterTapping;
@property (nonatomic) BOOL switchOn;
@property (copy, nonatomic) id /* block */ tappedHandleBlock;

- (void)viewDidTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 labelEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 isCenterX:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
