@class NSMutableArray, FinderPoiGroupBuyResponse_PoiGroupBuyCoupon, UIImageView, UIButton, UILabel, WCFinderFullScrollTextView, UIView;
@protocol WCFinderPoiGroupBuyViewDelegate;

@interface WCFinderPoiGroupBuyView : UIView

@property (retain, nonatomic) FinderPoiGroupBuyResponse_PoiGroupBuyCoupon *groupBuyCoupon;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) WCFinderFullScrollTextView *titleContainerView;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) NSMutableArray *tagLabelArray;
@property (retain, nonatomic) UILabel *discountPriceLabel;
@property (retain, nonatomic) UILabel *fullPriceLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) id<WCFinderPoiGroupBuyViewDelegate> delegate;
@property (nonatomic) unsigned long long viewStyle;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCoupon:(id)a0;
- (void)updateLayout;
- (double)wordingLeft;
- (void)onActionButtonClicked:(id)a0;
- (id)genTagLabelWithText:(id)a0;
- (void).cxx_destruct;

@end
