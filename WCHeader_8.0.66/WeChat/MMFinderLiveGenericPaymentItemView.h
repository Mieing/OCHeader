@class UILabel, UIImageView, MMFinderLiveGenericPaymentItem;

@interface MMFinderLiveGenericPaymentItemView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIImageView *webeanImageView;
@property (readonly, nonatomic) MMFinderLiveGenericPaymentItem *item;
@property (nonatomic) BOOL selected;

- (id)initWithItem:(id)a0;
- (void)initUI;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
