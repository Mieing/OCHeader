@class UIColor, UIImage;

@interface AWEImageAlbumAddToCustomImagePickerSelectIndicator : UIView

@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIImage *checkIcon;
@property (nonatomic) double selectedBorderWidth;
@property (nonatomic) BOOL selected;

- (id)strokeColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
