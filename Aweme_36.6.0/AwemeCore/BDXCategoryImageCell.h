@class NSString, NSURL, UIImageView;

@interface BDXCategoryImageCell : BDXCategoryIndicatorCell

@property (retain, nonatomic) NSString *currentImageName;
@property (retain, nonatomic) NSURL *currentImageURL;
@property (retain, nonatomic) UIImageView *imageView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)reloadData:(id)a0;
- (void)initializeViews;

@end
