@class NSString, AWEIMPrivateChatManagementDataManager, AWEIMPrivateChatManagementFilterViewModel, NSArray, AWEIMPrivateChatManagementHeaderViewModel;

@interface AWEIMPrivateChatManagementViewModel : AWEIMChatListControllerViewModel <AWEIMPrivateChatManagementDataManagerDelegate>

@property (nonatomic) long long filterViewStyle;
@property (retain, nonatomic) AWEIMPrivateChatManagementDataManager *dataManager;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEIMPrivateChatManagementHeaderViewModel *headerViewModel;
@property (retain, nonatomic) AWEIMPrivateChatManagementFilterViewModel *filterViewModel;
@property (retain, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchTabWithType:(unsigned long long)a0;
- (void)didFinishLoadWithSourceData:(id)a0;
- (unsigned long long)currentFilterTabType;
- (void)showBubbleIfNeed;
- (void)switchHeaderIconWithSelected:(BOOL)a0;
- (BOOL)__showHeaderBubbleIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;

@end
