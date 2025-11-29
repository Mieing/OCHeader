@class NSString, IESECObjectMapper;

@interface IESECWindowSearchCellProvider : NSObject <IESECRelationSearchCellProvider> {
    IESECObjectMapper *_objectMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)relationCardViewModelWithGoodsModel:(id)a0 tabStyle:(long long)a1;
- (id)relationCardViewModelWithGoodsModel:(id)a0;
- (id)singleColumnCellForCollectionContext:(id)a0 scene:(long long)a1 viewModel:(id)a2 sectionController:(id)a3 atIndex:(long long)a4 delegate:(id)a5 tabStyle:(long long)a6;
- (id)doubleColumnCellForCollectionContext:(id)a0 scene:(long long)a1 viewModel:(id)a2 sectionController:(id)a3 atIndex:(long long)a4 delegate:(id)a5 tabStyle:(long long)a6;
- (double)heightForItemAtIndex:(long long)a0 viewModel:(id)a1 tabStyle:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
