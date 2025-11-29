@class NSString, IESECCommonGoodsListHandler, IESECAtom, NSDictionary, IESECStoreSearchResultViewController;

@interface IESECRelationSearchResultActionHandler : NSObject <IESECRelationGoodsListActionHandlerDelegate>

@property (nonatomic) BOOL isRecommend;
@property (nonatomic) unsigned long long handlerType;
@property (weak, nonatomic) IESECStoreSearchResultViewController *viewController;
@property (retain, nonatomic) IESECCommonGoodsListHandler *listHandler;
@property (retain, nonatomic) IESECAtom *searchWordAtom;
@property (retain, nonatomic) IESECAtom *logPassbackAtom;
@property (retain, nonatomic) IESECAtom *searchID;
@property (copy, nonatomic) NSString *secAuthorID;
@property (nonatomic) BOOL followStatus;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectRelationGoods:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)redirectToGoodsDetailByRequestWithModel:(id)a0 cell:(id)a1 extraParams:(id)a2 searchParams:(id)a3 btmID:(id)a4 btmInfo:(id)a5 btmToken:(id)a6;
- (void)redirectToGoodsDetailWithURL:(id)a0 viewModel:(id)a1 extraParams:(id)a2 searchParams:(id)a3 btmToken:(id)a4 cell:(id)a5 btmInfo:(id)a6 btmID:(id)a7;
- (id)getProductForm;
- (id)entranceInfoWithViewModel:(id)a0 extraParams:(id)a1 searchParams:(id)a2;
- (void)trackBCMWithProductModel:(id)a0 searchParams:(id)a1;
- (id)tracker;
- (void).cxx_destruct;
- (id)searchContext;

@end
