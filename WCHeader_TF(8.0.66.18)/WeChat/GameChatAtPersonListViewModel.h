@class NSString, NSArray, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, GCAtPersonListViewModelDelegate, GCAtPersonListViewModelViewDelegate;

@interface GameChatAtPersonListViewModel : NSObject

@property (retain, nonatomic) NSMutableSet *otherMemberNameSet;
@property (nonatomic) BOOL isPreloadDB;
@property (copy, nonatomic) NSString *ownerUserName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) double fullUpdateStartTime;
@property (nonatomic) double fullUpdateCostTime;
@property (weak, nonatomic) id<GCAtPersonListViewModelDelegate> delegate;
@property (weak, nonatomic) id<GCAtPersonListViewModelViewDelegate> viewDelegate;
@property (copy, nonatomic) NSArray *allAndRobotModelArr;
@property (retain, nonatomic) NSMutableArray *recentAtArray;
@property (retain, nonatomic) NSMutableArray *managerArray;
@property (retain, nonatomic) NSMutableArray *otherMemberArray;
@property (readonly, nonatomic) NSString *chatRoomName;
@property (readonly, nonatomic) BOOL isOwner;
@property (copy, nonatomic) NSString *myUserName;
@property (copy, nonatomic) NSArray *adminNameList;

- (id)initWithChatRoomName:(id)a0;
- (void)setOwnerUserName:(id)a0 andAdminNameList:(id)a1;
- (void)delayPreloadAtListData:(long long)a0;
- (void)loadLocalAtListData:(BOOL)a0;
- (BOOL)checkFallInto24Hour;
- (void)requestAtListData;
- (void)handleAllMemeberNameListResponse:(id)a0 lastVersion:(id)a1;
- (id)searchList:(id)a0;
- (void)requestRecentlyAtList;
- (void)reloadOtherMemberArray;
- (id)getAtModelFromContact:(id)a0;
- (id)getAtModelFromSimpleData:(id)a0;
- (BOOL)isAllMemberShow;
- (void)recordAtAll;
- (double)canAtAllLeftTime;
- (id)getPullVersionKey;
- (id)get24HourCheckKey;
- (id)getAtAllLastTimeKey;
- (void).cxx_destruct;

@end
