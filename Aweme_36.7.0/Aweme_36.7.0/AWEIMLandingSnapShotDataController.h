@class NSArray, NSMutableDictionary;

@interface AWEIMLandingSnapShotDataController : NSObject

@property (nonatomic) BOOL hasLocoalOfficialUnRead;
@property (retain, nonatomic) NSArray *snapShotChatList;
@property (retain, nonatomic) NSMutableDictionary *locoalOfficialSnapShotChat;

+ (id)sharedInstance;

- (void)clearMemoryData;
- (BOOL)hasLocoalSnapShotUnreadOfficialChat;
- (id)snapShotLocoalOfficalChatFor:(id)a0;
- (void)tryAddSnapShotWithFinishLoadOption:(unsigned long long)a0;
- (BOOL)p_isTargetChat:(id)a0 withOption:(unsigned long long)a1;
- (void)p_tryRemoveSnapShotWithOption:(unsigned long long)a0 force:(BOOL)a1;
- (id)p_stringResultForTabs:(id)a0;
- (void)loadSDKDataFinishedWithRemoteOfficalChat:(BOOL)a0;
- (void)loadOfficalChatFinishedWithSDKFinished:(BOOL)a0;
- (void)tryRemoveSnapShotWithFinishLoadOption:(unsigned long long)a0;
- (void)storeLastTabSkeleton:(id)a0;
- (void)storeSnapShotDate;
- (double)getLastStoredSnapShotDate;
- (BOOL)isTabSkeletonMatch:(id)a0;
- (BOOL)p_isOfficalChatNeedInsert:(id)a0;
- (void).cxx_destruct;

@end
