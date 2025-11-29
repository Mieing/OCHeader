@class AWEIMLiveGroupRequestManager, NSMutableDictionary, NSTimer, NSMutableSet;
@protocol AWEIMChatListHintProviderUpdateHintInterface, AWEIMLiveGroupInfoManagerDelegate;

@interface AWEIMLiveGroupInfoManager : NSObject

@property (retain, nonatomic) AWEIMLiveGroupRequestManager *requestManager;
@property (retain, nonatomic) NSMutableDictionary *liveGroupInfoDictionary;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableSet *conversationIdsForUpdate;
@property (retain, nonatomic) NSMutableSet *conversationIdsShowedOnCurrentPage;
@property (weak, nonatomic) id<AWEIMChatListHintProviderUpdateHintInterface> hintUpdateService;
@property (weak, nonatomic) id<AWEIMLiveGroupInfoManagerDelegate> delegate;

+ (BOOL)isForbidden:(id)a0;
+ (BOOL)isLiveGroupType:(id)a0;
+ (BOOL)isTransferredGroup:(id)a0;
+ (BOOL)isKtvGroupWithHintAndTopTip:(id)a0;
+ (id)sharedManager;

- (void)requestLiveGroupInfo:(id)a0 avatarNeeded:(BOOL)a1;
- (BOOL)isCurrentPageAndAvatarInfoMatched:(BOOL)a0;
- (BOOL)noInfoOrOldInfoForConversationId:(id)a0;
- (void)updatePage:(id)a0;
- (void)createLiveGroupInfoIfNeeded:(id)a0;
- (void)stopPollingWithViewDisappeared:(BOOL)a0;
- (void)updateMessageBasePage:(id)a0;
- (void)updateConversations;
- (void)requestIfNeededForConversationId:(id)a0;
- (void)updateLiveGroupInfoForConversationId:(id)a0 numberOfPeople:(long long)a1 groupUsers:(id)a2 hasAvartarInfo:(BOOL)a3;
- (void)possiblyStartPolling;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;

@end
