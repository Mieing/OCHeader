@class UIStackView, NSString, UIImageView, NSDictionary, UILabel, UIViewController;
@protocol AWEECShoppingGoodsCardElementViewDelegate;

@interface AWEFeedGoodsElementView : UIView <AWEFeedGoodsElementProtocol>

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *priceLabelContainer;
@property (weak, nonatomic) id<AWEECShoppingGoodsCardElementViewDelegate> delegate;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) UIViewController *containerVC;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
