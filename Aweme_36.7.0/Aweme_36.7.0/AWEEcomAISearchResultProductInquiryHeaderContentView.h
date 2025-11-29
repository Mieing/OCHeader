@class UIImageView, UILabel;

@interface AWEEcomAISearchResultProductInquiryHeaderContentView : UIView

@property (retain, nonatomic) UIImageView *productMainPicView;
@property (retain, nonatomic) UIImageView *shoppingBagIcon;
@property (retain, nonatomic) UILabel *productTitleLabel;
@property (retain, nonatomic) UILabel *queryLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupSubviews;

@end
