@class NSArray, NSMutableDictionary, NSString;

@interface AWEIMMessageTabPokeLightInteractionUtility : NSObject <AWEUserMessage, AWEIMActiveUserAcquirerFetchEventDelegate>

@property (copy, nonatomic) NSArray *latestSortedConversationsArray;
@property (nonatomic) unsigned long long globalStatusCount;
@property (nonatomic) BOOL messaegeTabWillFetchVisiableUserOnlineStatus;
@property (nonatomic) BOOL innerShouldRefreshWhenViewDidAppear;
@property (nonatomic) BOOL messaegeTabDidFetchVisiableUserOnlineStatus;
@property (retain, nonatomic) NSMutableDictionary *landingLatestMessageDict;
@property (copy, nonatomic) id /* block */ didFetchUserOnlineStatusFirstTimeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isCompanyAccount:(id)a0;
- (void)increaseGlobalStatusCount;
- (void)activeUserAcquirerDidFinishFetch:(id)a0;
- (id)pokeLightInteractionName;
- (void)willChangeToMessageTab;
- (id)cropArrayWithLimitCount:(unsigned long long)a0 originArray:(id)a1;
- (id)filterSingleChatModels:(id)a0;
- (id)sortConversationsArray:(id)a0;
- (unsigned long long)currentShowPokeMaxCount:(BOOL)a0;
- (BOOL)p_shouldShowUnreadDotOrRedDotWithChatModel:(id)a0;
- (id)secUidWithConversationString:(id)a0;
- (BOOL)onlyShowPokeOnIntimacyFriends;
- (void)didChangeToMessageTab;
- (BOOL)shouldRefreshWhenViewDidAppear;
- (void)recordLastestSortedConversationsArray:(id)a0;
- (void)prepareDataCoreWithVisibleChats:(id)a0 completion:(id /* block */)a1;
- (void)recordMessaegeTabWillFetchVisiableUserOnlineStatus;
- (void)resetShowPokeMaxCountIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
