@class AWEIMShareContactListViewRecentChatSegmentedLoadingManager, NSMutableArray, NSString;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerMessageTabChatDataProvider : NSObject <IESIMContactDataProviderLoadMoreAble, IESIMContactPickerContentDataProvider>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) AWEIMShareContactListViewRecentChatSegmentedLoadingManager *messageTabManager;
@property (retain, nonatomic) NSMutableArray *shareModels;
@property (nonatomic) BOOL hasMore;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getShareModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void)loadMoreShareModelWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
