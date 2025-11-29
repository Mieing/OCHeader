@class AWESearchBackgroundBGImageModel, BDImageView;

@interface AWEEcomSearchBackgroundImageView : UIView

@property (retain, nonatomic) BDImageView *bgImageView;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) AWESearchBackgroundBGImageModel *model;
@property (nonatomic) BOOL fillView;

- (void)updateImageViewFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
