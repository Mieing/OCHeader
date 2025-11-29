@class MMFinderLiveShopShelfCoordinator, NSString, MMUIButton, MMUILabel;

@interface MMFinderLiveShopGoodsManageSectionHeaderView : MMUIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *flashSaleButton;
@property (retain, nonatomic) MMUIButton *manageButton;
@property (retain, nonatomic) MMUIButton *addGoodsButton;
@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldHideFlashSale;
@property (nonatomic) BOOL shouldHideOthersExceptFlashSale;

- (void)update;
- (id)initWithCoordinator:(id)a0;
- (void)layoutSubviews;
- (id)addButtonWithImage:(id)a0 text:(id)a1 action:(SEL)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
