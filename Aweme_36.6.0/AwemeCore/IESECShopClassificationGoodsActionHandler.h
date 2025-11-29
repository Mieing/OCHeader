@class IESECShopGoodsState, NSString, IESECShopContext, IESECShopCommonGoodsListHandler;
@protocol IESECShopClassificationViewControllerProtocol;

@interface IESECShopClassificationGoodsActionHandler : NSObject <IESECShopGoodsStateAttachable, IESECShopGoodsListActionHandlerDelegate>

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (weak, nonatomic) id<IESECShopClassificationViewControllerProtocol> viewController;
@property (retain, nonatomic) IESECShopCommonGoodsListHandler *commonGoodsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)redirectToGoodsDetailFromURL:(id)a0 atIndex:(long long)a1 viewModel:(id)a2 btmToken:(id)a3;
- (void)redirectToGoodsDetailFromRequestAtIndex:(long long)a0 viewModel:(id)a1 extraParams:(id)a2 btmID:(id)a3 btmToken:(id)a4;
- (id)extraEntranceInfoAtIndex:(long long)a0 viewModel:(id)a1;
- (void)attachState:(id)a0;
- (void)didSelectRelationGoods:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)handleBackButtonClick:(id)a0;
- (void)handleSearchButtonClick:(id)a0;
- (void).cxx_destruct;

@end
