@class IESECStorePageContext, IESECShopTagListModel, IESECShopDisplayNameInfo, IESECShopInfoResponse;
@protocol IESECStoreContainerProtocol;

@interface IESECShopTinyHeaderViewModel : NSObject

@property (retain, nonatomic) IESECShopInfoResponse *infoResponse;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (retain, nonatomic) IESECShopDisplayNameInfo *shopDisplayName;
@property (retain, nonatomic) IESECShopTagListModel *topTagModel;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;

- (id)shopDetailUrl;
- (void)updateWithInfoResponse:(id)a0 pageContext:(id)a1;
- (void)transferToStoreDetailPage:(id)a0;
- (void)transferToStoreOwnerProfilePage:(id)a0;
- (void)trackClickStoreInfoView:(id)a0 btmID:(id)a1;
- (BOOL)checkFlagship;
- (void)transferToRankOrCollectionView;
- (void)trackShowRankOrCollectionView;
- (void).cxx_destruct;
- (id)init;

@end
