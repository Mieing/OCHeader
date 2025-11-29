@class NSString, IESECAtom, IESECShopSearchResultActionHandler;

@interface IESECShopSearchResultGoodsListSectionController : IESECShopGoodsSectionController <IESECShopSearchResultSectionControllerProtocol> {
    IESECShopSearchResultActionHandler *_searchResultActionHandler;
}

@property (nonatomic) BOOL isRecommend;
@property (retain, nonatomic) IESECAtom *searchWordAtom;
@property (retain, nonatomic) IESECAtom *logPassbackAtom;
@property (retain, nonatomic) IESECAtom *searchIDAtom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)actionHandler;

@end
