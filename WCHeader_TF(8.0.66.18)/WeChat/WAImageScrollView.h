@class ImageScrollView, ImageBrowseButton;
@protocol WAImageScrollViewDelegate;

@interface WAImageScrollView : UIView

@property (retain, nonatomic) ImageBrowseButton *hdImgBtn;
@property (retain, nonatomic) ImageBrowseButton *hdImgStatusButton;
@property (retain, nonatomic) ImageScrollView *imageScrollView;
@property (weak, nonatomic) id<WAImageScrollViewDelegate> delegate;
@property (nonatomic) unsigned int pageIndex;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)initSubviews;
- (id)getImageScrollView;
- (void)setImageScrollViewDelegate:(id)a0;
- (BOOL)canShowHDImgButton;
- (BOOL)canShowHDImgStatusButton;
- (void)onViewHDImage:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
