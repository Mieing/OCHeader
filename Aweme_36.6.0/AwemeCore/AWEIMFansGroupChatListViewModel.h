@class NSArray, NSString;
@protocol IESIMConvBoxChatDataManagerProtocol, AWEIMFansGroupChatListRefreshDelegate;

@interface AWEIMFansGroupChatListViewModel : AWEIMChatListControllerViewModel <AWEIMConvBoxChatDataManagerDelegate>

@property (copy, nonatomic) NSArray *originConvIDs;
@property (nonatomic) BOOL originDataReady;
@property (retain, nonatomic) id<IESIMConvBoxChatDataManagerProtocol> dataManager;
@property (weak, nonatomic) id<AWEIMFansGroupChatListRefreshDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *fansGroupChatList;
@property (nonatomic) BOOL needClearDataAfterExit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeChat:(id)a0 completion:(id /* block */)a1;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)didReloadChatList;
- (void)didReloadChat:(id)a0;
- (void)didRemoveChat:(id)a0;
- (void)didInsertChat:(id)a0;
- (BOOL)hasMoreMessagesToShow;
- (id)initWithConvIDs:(id)a0;
- (void)fetchDataWithConvIDs:(id)a0 completion:(id /* block */)a1;
- (long long)numberOfBriefListExposedRows;
- (long long)briefListMaxExposedRows;
- (BOOL)canShowEmptyPlaceholder;
- (id)emptyImageName;
- (id)emptyLabelText;
- (void)p_setupDataManager;
- (void)p_clearDataCaseSceneExit;
- (BOOL)p_isMyFansGroupWithOwnerID:(long long)a0 creatorUid:(long long)a1 ext:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)hasUnreadMessages;
- (double)cellHeight;

@end
