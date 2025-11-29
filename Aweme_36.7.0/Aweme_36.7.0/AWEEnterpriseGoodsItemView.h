@class AWEEnterpriseGoodsItemViewModel, UIImageView, AWEEnterpriseIMMessageGoodsItemModel, UIView, UILabel;

@interface AWEEnterpriseGoodsItemView : UIView

@property (retain, nonatomic) AWEEnterpriseIMMessageGoodsItemModel *detailData;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIView *mainTitlePlaceHolder;
@property (retain, nonatomic) UIView *subTitlePlaceHolder;
@property (retain, nonatomic) UIView *pricePlaceHolder;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *priceNumberLabel;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) AWEEnterpriseGoodsItemViewModel *viewModel;

- (void)viewTapped;
- (void)bindViewAndViewModel;
- (void)p_refreshLayoutWithSubTitle:(BOOL)a0;
- (void)p_setupLoadingUI;
- (void)p_setupDetailUI;
- (id)creatPlaceHolder;
- (void)displayWithLoading;
- (void)displayWithData;
- (void).cxx_destruct;
- (id)init;

@end
