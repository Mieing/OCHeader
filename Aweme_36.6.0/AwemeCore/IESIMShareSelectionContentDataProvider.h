@class AWEIMShareMoreSelectionDataFilter, NSString, AWEIMShareContactListViewRecentChatSegmentedLoadingManager, NSArray, IESIMContactPickerContext, IESIMContactPickerComponentContext;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMShareSelectionContentDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) AWEIMShareContactListViewRecentChatSegmentedLoadingManager *messageTabManager;
@property (retain, nonatomic) NSArray *loadedCellModels;
@property (nonatomic) unsigned long long dataType;
@property (weak, nonatomic) IESIMContactPickerContext *listContext;
@property (weak, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (retain, nonatomic) AWEIMShareMoreSelectionDataFilter *dataFilter;
@property (copy, nonatomic) id /* block */ loadMoreHandler;
@property (copy, nonatomic) id /* block */ cellWillDisplay;
@property (copy, nonatomic) id /* block */ didSelectCellModelHandler;
@property (nonatomic) BOOL needShowRelationTag;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)p_getRelationTagModel:(id)a0;
- (id)initWithDataType:(unsigned long long)a0 context:(id)a1;
- (void)loadMessageTabDataDataWithDeferPromise:(id)a0;
- (void)loadAllContactDataWithDeferPromise:(id)a0;
- (void)setCellModelUIConfigWithModel:(id)a0;
- (void)p_addNewCellModels:(id)a0;
- (void).cxx_destruct;

@end
