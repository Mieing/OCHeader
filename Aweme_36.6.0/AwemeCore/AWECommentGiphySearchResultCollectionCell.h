@class NSString, YYAnimatedImageView;

@interface AWECommentGiphySearchResultCollectionCell : UICollectionViewCell

@property (retain, nonatomic) YYAnimatedImageView *giphyImageView;
@property (retain, nonatomic) NSString *identifier;

- (void)configModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
