@class UIImageView, AWEInteractionStickerLocationModel, UILabel, UIView;

@interface AWEVideoCoverFakeProfileView : UIView

@property (nonatomic) double scale;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *stickerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *location;

+ (double)viewHeight;

- (void)updateCoverImage:(id)a0;
- (void)configScale:(double)a0;
- (void)updateStickerViewImage:(id)a0;
- (void)updateCoverPostionWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateStickerPostion:(id)a0;
- (void)p_configSubviews;
- (id)p_createPostCoverView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
