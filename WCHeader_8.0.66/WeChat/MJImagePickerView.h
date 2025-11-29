@class UILabel, UIButton, UIView;
@protocol MJImagePickerViewDelegate;

@interface MJImagePickerView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *videoThumbnailContainer;
@property (retain, nonatomic) UIButton *importButton;
@property (weak, nonatomic) id<MJImagePickerViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void)_layoutViews;
- (void)_importButtonTapped;
- (void).cxx_destruct;

@end
