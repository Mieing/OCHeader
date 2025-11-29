@class NSArray, NSMutableDictionary, NSString, NSMutableArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerDataProviderCombination : NSObject <IESIMContactDataProviderLoadMoreAble, IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSArray *dataProviders;
@property (copy, nonatomic) id /* block */ dataFilter;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSMutableArray *cellModels;
@property (retain, nonatomic) NSMutableDictionary *existMapper;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long maxCount;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshCellModelCacheAfterSearch;
- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getShareModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void)loadMoreShareModelWithCompletion:(id /* block */)a0;
- (id)initWithDataProviders:(id)a0 dataFilter:(id /* block */)a1;
- (id)p_tryToCreateNewCellModelWithShareModels:(id)a0;
- (void)p_refreshHasMoreState;
- (id)p_loopGetShareModelsFromDataProvidersWithIndex:(long long)a0 currentList:(id)a1;
- (BOOL)p_isValidWithShareModel:(id)a0;
- (void)p_loopLoadMoreShareModelsOptWithCurrentList:(id)a0 completion:(id /* block */)a1;
- (void)p_loopLoadMoreShareModelWithCompletion:(id /* block */)a0 index:(long long)a1 currentList:(id)a2;
- (id)initWithDataProviders:(id)a0 maxCount:(long long)a1 dataFilter:(id /* block */)a2;
- (void).cxx_destruct;

@end
