@class NSArray, AWEIMRecommendUserListInfoModel, NSString, IESIMContactPickerContext;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMInviteFansContentDataProvider : IESIMContactPickerContactDataProvider <IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSArray *loadedCellModels;
@property (weak, nonatomic) IESIMContactPickerContext *listContext;
@property (retain, nonatomic) AWEIMRecommendUserListInfoModel *model;
@property (nonatomic) long long scene;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMore;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)initWitContext:(id)a0;
- (void)__addNewCellModels:(id)a0;
- (void)__getMoreRecentDataWithCompletion:(id /* block */)a0;
- (long long)__limitPerPage;
- (void)__fetchData:(long long)a0 scene:(long long)a1 cursor:(long long)a2 completion:(id /* block */)a3;
- (id)__shareModelWithRecommendUserModels:(id)a0;
- (void).cxx_destruct;

@end
