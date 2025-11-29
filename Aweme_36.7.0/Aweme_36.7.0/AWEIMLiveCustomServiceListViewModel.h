@class AWEIMUser, NSArray, NSDictionary, NSMutableSet, NSString;
@protocol IESIMConvBoxChatDataManagerProtocol;

@interface AWEIMLiveCustomServiceListViewModel : AWEIMChatListControllerViewModel <AWEIMConvBoxChatDataManagerDelegate>

@property (retain, nonatomic) NSArray *chatArray;
@property (retain, nonatomic) AWEIMUser *spUser;
@property (nonatomic) long long role;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isInLive;
@property (retain, nonatomic) id<IESIMConvBoxChatDataManagerProtocol> dataManager;
@property (nonatomic) BOOL refactorCell;
@property (nonatomic) BOOL hasRequestSpUserInfo;
@property (retain, nonatomic) NSMutableSet *appearedCells;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)conversationDataManager;
- (void)p_setupData;
- (void)didReloadChatList;
- (void)trackEnterChat:(id)a0;
- (id)initWithRole:(long long)a0 extra:(id)a1 isInLive:(BOOL)a2;
- (void)onViewControllerAppear;
- (void)updateSpUidFromLive:(id)a0;
- (void)trackLiveCustomUnReadChatCellShow:(id)a0;
- (id)rowActionsWithChat:(id)a0;
- (void)trackBackButtonClick;
- (void)p_updateSPUserInfo:(id)a0;
- (void)p_removeChat:(id)a0;
- (id)p_rowActionWithTitle:(id)a0 backgroundColor:(id)a1 completion:(id /* block */)a2;
- (void)p_trackDeleteChat:(id)a0;
- (void)didReloadChat:(id)a0;
- (void)didRemoveChat:(id)a0;
- (void)didInsertChat:(id)a0;
- (void).cxx_destruct;

@end
