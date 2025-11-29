@class NSURL, MMWebImageView;

@interface ChatBotImageCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) NSURL *imageURL;

- (void)layoutImageView;
- (void)layoutSubviews;
- (void)setImagePath:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
