@class UIImageView, UILabel, UIImage;

@interface AWEIMSelectableStatusView : UIView

@property (nonatomic) unsigned long long status;
@property (nonatomic) long long number;
@property (retain, nonatomic) UIImageView *unselectImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImage *selectImage;
@property (nonatomic) struct CGSize { double width; double height; } primarySize;
@property (nonatomic) BOOL newStyle;

- (void)setSelect:(unsigned long long)a0 number:(long long)a1 animated:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUnselectImage:(id)a1 withSelectImage:(id)a2;
- (void).cxx_destruct;

@end
