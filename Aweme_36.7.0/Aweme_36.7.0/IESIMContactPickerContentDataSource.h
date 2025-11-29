@class NSArray;
@protocol IESIMSearchEngineProtocol, IESIMContactPickerContentSectionBuilder;

@interface IESIMContactPickerContentDataSource : NSObject

@property (copy, nonatomic) NSArray *dataProviders;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (nonatomic) long long state;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> searchSectionBuilder;

- (void)refreshCellModelCacheAfterSearch;
- (void)searchWithKeyword:(id)a0;
- (void)__log:(id)a0;
- (id)moveConditionalElementsWithTargets:(id)a0 downWithShift:(long long)a1 condition:(id /* block */)a2;
- (void)setupWithProviders:(id)a0 searchEngine:(id)a1 searchSectionBuilder:(id)a2;
- (id)loadDataWithSearchKeyword:(id)a0;
- (id)__loadDataWithProviderToPromiseMap:(id)a0 loadingPromises:(id)a1 isFromFTSSearch:(BOOL)a2;
- (id)__sortSectionModels:(id)a0;
- (id)__deDuplicateCellModelWithSectionModels:(id)a0;
- (id)__removeEmptySectionModels:(id)a0 isFromFTSSearch:(BOOL)a1;
- (id)__sortedListWithSectionModels:(id)a0;
- (void)__setupSearchEngineWithSectionModels:(id)a0;
- (BOOL)__isRealEmptyContent:(id)a0;
- (void).cxx_destruct;
- (void)resetState;
- (id)loadData;

@end
