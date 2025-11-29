@class IESECUIButton, UIView, NSString, IESECMatchPurchaseButtomView, IESECInsetsLabel, IGListAdapter, UICollectionView, IESECMatchPurchaseModel, UILabel;
@protocol IESECMatchPurchaseGoodsBuyViewDelegate;

@interface IESECMatchPurchaseGoodsBuyView : UIView <IGListAdapterDataSource, IESECMatchPurchaseCellProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) IESECUIButton *buyButton;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIView *polygonView;
@property (retain, nonatomic) IESECMatchPurchaseButtomView *buyButtonV2;
@property (retain, nonatomic) IESECInsetsLabel *tipLabel;
@property (retain, nonatomic) IESECMatchPurchaseModel *model;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<IESECMatchPurchaseGoodsBuyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)tapSelectIconWithModel:(id)a0;
- (void)tapSkuIconWithModel:(id)a0;
- (void)tapBuyNow;
- (void)refreshBuyButton;
- (void)productDidClickedWithModel:(id)a0 clickView:(id)a1;
- (void)productWillShowWithModel:(id)a0;
- (void)reloadData;
- (void)selectAll;
- (void).cxx_destruct;
- (void)deselectAll;
- (void)setUpCollectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;

@end
