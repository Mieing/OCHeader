@class UILabel, UIImageView;

@interface AWEStickerPickerLoadingView : AWEStickerPickerOverlayView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *loadingImageView;

- (void)updateLoadingText:(id)a0;
- (void)updateCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
