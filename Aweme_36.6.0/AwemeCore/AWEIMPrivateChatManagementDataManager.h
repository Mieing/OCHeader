@class NSArray, NSDictionary, RxScheduler, NSObject, AWEIMChatModel;
@protocol OS_dispatch_queue, AWEIMPrivateChatManagementDataManagerDelegate;

@interface AWEIMPrivateChatManagementDataManager : NSObject

@property (copy, nonatomic) NSDictionary *dict;
@property (copy, nonatomic) NSArray *sourceData;
@property (copy, nonatomic) NSArray *sourceStrangeData;
@property (copy, nonatomic) NSArray *showData;
@property (retain, nonatomic) AWEIMChatModel *strangeBoxChatModel;
@property (copy, nonatomic) NSArray *importantCache;
@property (nonatomic) BOOL hasFetched;
@property (nonatomic) BOOL shouldCache;
@property (nonatomic) BOOL hasStoreCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) RxScheduler *curScheduler;
@property (weak, nonatomic) id<AWEIMPrivateChatManagementDataManagerDelegate> delegate;
@property (nonatomic) unsigned long long selectType;

- (id)__processShouldStartLoad;
- (id)__processShouldConstructData;
- (id)__processShouldFetchLabel;
- (id)__loadImportantConUseCache;
- (id)__constructShowDataWithSelectType:(unsigned long long)a0;
- (id)__shouldReportBoxTypes;
- (id)__loadUnreadSingleConversations;
- (id)__checkFetchLabelIfNeed;
- (id)__distributeFetchLabelTask:(id)a0;
- (id)__filterSortConversation;
- (id)__fetchLabelUsersWithArr:(id)a0;
- (long long)__conversationsComparator:(id)a0 obj2:(id)a1;
- (id)__saveUserRelationLabelWithChat:(id)a0 user:(id)a1;
- (id)__didFinishLoad;
- (void)switchDataWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;

@end
