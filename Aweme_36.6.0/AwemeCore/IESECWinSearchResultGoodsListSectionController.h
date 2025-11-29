@class NSString, IESECAtom, IESECRelationSearchResultActionHandler;

@interface IESECWinSearchResultGoodsListSectionController : IESECRelationGoodsListSectionController <IESECWinFlexGoodsCellProtocol, IESECRelationSearchResultSectionControllerProtocol> {
    IESECRelationSearchResultActionHandler *_searchResultActionHandler;
}

@property (nonatomic) BOOL isRecommend;
@property (nonatomic) long long productTabStyle;
@property (retain, nonatomic) IESECAtom *searchWordAtom;
@property (retain, nonatomic) IESECAtom *logPassbackAtom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (void)tapOnSourceView:(id)a0 jump:(BOOL)a1;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)actionHandler;
- (long long)scene;

@end
