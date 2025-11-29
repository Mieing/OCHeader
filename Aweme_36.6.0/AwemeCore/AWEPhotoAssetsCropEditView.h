@class AWEAssetsCropAndClipViewModel, UIImageView, NSURL, UILabel;

@interface AWEPhotoAssetsCropEditView : AWEAssetsCropEditBaseView

@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) struct CGSize { double width; double height; } videoImageSize;
@property (retain, nonatomic) AWEAssetsCropAndClipViewModel *viewModel;
@property (copy, nonatomic) NSURL *imageFileURL;

- (void)refreshFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fragment:(id)a1 viewModel:(id)a2;
- (double)limitYWithHeight:(double)a0;
- (struct CGSize { double x0; double x1; })contentSizeWithUpdate:(BOOL)a0;
- (id)assetContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fragment:(id)a1;
- (void).cxx_destruct;
- (double)expectedHeight;

@end
