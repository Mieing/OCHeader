@class UIImageView, UIView, MMUIButton, MMUILabel;

@interface WCFinderPoiRecommendDishDetailTableViewCell : UITableViewCell

@property (nonatomic) BOOL isLastCell;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) MMUIButton *likeButton;
@property (retain, nonatomic) UIView *separateLine;

+ (double)heightForDishDetail:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)updateWithDishDetail:(id)a0 isLastCell:(BOOL)a1;
- (void)updateLayout;
- (void).cxx_destruct;

@end
