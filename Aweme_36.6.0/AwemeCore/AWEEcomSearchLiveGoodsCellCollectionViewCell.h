@class NSString, NSDictionary, AWEDoubleColumnSearchMerchandiseModel, UIView;
@protocol AWEEcomLiveCellDelegate, AWEECLivePromotionCardProviderService;

@interface AWEEcomSearchLiveGoodsCellCollectionViewCell : UICollectionViewCell <AWEECLivePromotionCardProviderBizDelegate, AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIView *liveGoodsView;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSDictionary *paramsInfo;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) id<AWEECLivePromotionCardProviderService> cardProvider;
@property (weak, nonatomic) id<AWEEcomLiveCellDelegate> delegate;
@property (nonatomic) BOOL isFromEcomLivePhotoSearchPanel;
@property (nonatomic) BOOL haveAddToCartEndPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (id)ecomEntranceForm;
- (id)searchParams;
- (id)localPage;
- (id)localView;
- (id)providerCardPanelSize;
- (id)providerCardScene;
- (id)providerEcomEntranceForm;
- (void)trackWithType:(long long)a0 EventType:(long long)a1;
- (id /* block */)addCartAnimBlockWithCardInfo:(id)a0;
- (id)checkSourcePage;
- (id)sourceVC;
- (void)setSearchInfoDict:(id)a0;
- (void)closeSearchViewController:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (id)roomID;
- (id)currentView;

@end
