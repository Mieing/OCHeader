@class UIStackView, NSString, UIImageView, NSURL, NSLayoutConstraint;

@interface BDXCategoryTitleImageCell : BDXCategoryTitleCell

@property (retain, nonatomic) NSString *currentImageName;
@property (retain, nonatomic) NSURL *currentImageURL;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint;
@property (retain, nonatomic) UIImageView *imageView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadData:(id)a0;
- (void)initializeViews;

@end
