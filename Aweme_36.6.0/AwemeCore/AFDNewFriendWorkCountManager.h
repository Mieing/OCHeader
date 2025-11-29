@class NSString, NSMutableDictionary, NSTimer;
@protocol AWEHttpTask;

@interface AFDNewFriendWorkCountManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *eventParamDic;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSString *insertUserID;
@property (nonatomic) long long familiarCount;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (nonatomic) BOOL enableNewNotice;
@property (nonatomic) BOOL enableNextNotice;
@property (retain, nonatomic) NSTimer *nextFriendWorkNoticeTimer;
@property (nonatomic) BOOL needShowNextFriendWorkNoticeAfterLoadMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)unreadToastStyle;
+ (void)trackUnreadToastEventShowWithAvatarCount:(long long)a0;
+ (long long)unreadToastDurationSeconds;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateNewFriendWorkCount;
- (void)recordNewFriendWorkCountMonitorParamsWithDic:(id)a0;
- (void)trackNextFriendWorkNoticeEvent:(id)a0;
- (id)noticeStorageKey;
- (void)cancelNextFriendWorkNotice;
- (void)p_preloadAuthorAvatarForNextFriendWorkNotice:(long long)a0 dataController:(id)a1;
- (void)dismissNextFriendWorkNoticeIfNeeded;
- (void)showNextFriendWorkNotice:(long long)a0 dataController:(id)a1;
- (void)updateShowedNoticeStorage;
- (BOOL)shouldShowNotice;
- (void)trackNewFriendWorkNoticeEvent:(id)a0;
- (void)triggerShowNextFriendWorkNotice:(long long)a0 dataController:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
