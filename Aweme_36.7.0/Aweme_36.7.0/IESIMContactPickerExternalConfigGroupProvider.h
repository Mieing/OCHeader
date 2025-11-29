@class NSArray, NSString, IESIMContactPickerContext, NSMutableArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerExternalConfigGroupProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (retain, nonatomic) NSArray *cidList;
@property (weak, nonatomic) IESIMContactPickerContext *listContext;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSArray *loadedCellModels;
@property (nonatomic) long long beforeSortOrder;
@property (retain, nonatomic) NSMutableArray *afterFilterConversations;
@property (nonatomic) long long defaultSelectCount;
@property (nonatomic) long long maxGroupCount;
@property (nonatomic) BOOL needSortByGroupPeopleCount;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (void)updateComponentContext:(id)a0;
- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)initWithCidList:(id)a0 defaultSelectCount:(long long)a1 maxGroupCount:(long long)a2 needSortByGroupPeopleCount:(BOOL)a3;
- (void)__addNewCellModels:(id)a0;
- (void)sortGroupChatWithCompletion:(id /* block */)a0;
- (void)p_getMoreGroupChatDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
