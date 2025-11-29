@class NSArray, NSMutableSet, AWEIMPrivateChatManagementConfigModel, AWEIMPrivateChatManagementViewModel;

@interface AWEIMPrivateChatManagementHelperViewModel : AWEIMChatListControllerViewModel

@property (retain, nonatomic) AWEIMPrivateChatManagementViewModel *chatViewModel;
@property (retain, nonatomic) NSArray *chatData;
@property (retain, nonatomic) AWEIMPrivateChatManagementConfigModel *configModel;
@property (retain, nonatomic) NSArray *toolList;
@property (retain, nonatomic) NSArray *moduleIndexList;
@property (retain, nonatomic) NSMutableSet *chatCellShownSet;

- (void)__addObserver;
- (void)trackClickChatManageDetailEvent;
- (void)trackChatCellShowEventWithChat:(id)a0 index:(long long)a1 cell:(id)a2;
- (void)trackEnterChatEventWithChat:(id)a0;
- (id)__modifyToolListUseConfigCache;
- (void)__updateModuleIndexList;
- (void)__fetchConfigData;
- (id)__modifyToolListWithModel:(id)a0;
- (void)__saveConfigCacheWithToolList:(id)a0;
- (void)__updateModuleIndexListWithModuleTypeToolExist:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;

@end
