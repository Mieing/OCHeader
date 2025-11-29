@class NSMutableArray, NSMutableDictionary;

@interface AWEIMContextRecommendUtil : NSObject

@property (retain, nonatomic) NSMutableArray *chatList;
@property (nonatomic) double nextServerRequestTime;
@property (nonatomic) BOOL didFirstRequest;
@property (retain, nonatomic) NSMutableDictionary *mNoticeFlagDict;
@property (nonatomic) BOOL enableOptWatchOnceStrategy;
@property (nonatomic) unsigned long long requestType;

+ (unsigned long long)availableContextRecommendSceneForConversation:(id)a0;
+ (void)update_contextRecommendForConversation:(id)a0;
+ (BOOL)enable_contextRecommendForConversation:(id)a0;
+ (void)setChatCellDidClickIfNeeded:(id)a0 source:(unsigned long long)a1;
+ (void)markChatCellExitTime:(id)a0;
+ (id)buttonTitle_contextRecommendForConversation:(id)a0;
+ (id)iconUrl_contextRecommendForConversation:(id)a0;
+ (BOOL)isFestivalEntryModel:(id)a0;
+ (void)disable_contextRecommendInActionBarForConversation:(id)a0;
+ (void)entryModel_contextRecommendForConversation:(id)a0 completion:(id /* block */)a1;
+ (id)source_contextRecommendForConversation:(id)a0;
+ (id)configName_contextRecommendForConversation:(id)a0;
+ (BOOL)conversaionHasRecommendNotice:(id)a0;
+ (void)deleteNoticeMsgIfNeeded:(id)a0;
+ (BOOL)enable_contextRecommendInActionBarForConversation:(id)a0;
+ (BOOL)messageHasRecommendNoticeIsExpire:(id)a0;
+ (BOOL)p_enableByReverse;
+ (void)p_deleteNoticeMessageIfNeeded:(id)a0;
+ (BOOL)isConversationClick:(id)a0;
+ (unsigned long long)currentContextRecommendSceneForConversation:(id)a0;
+ (BOOL)p_enableContextRecommendSceneCreateGroupForConversation:(id)a0;
+ (id)greetType_contextRecommendForConversation:(id)a0;
+ (double)p_EndTimeForConversation:(id)a0;
+ (id)p_typeEndtimePairDictForConversation:(id)a0;
+ (BOOL)serverEnable_contextRecommendForConversation:(id)a0;
+ (id)p_typeStrForConversation:(id)a0;
+ (id)sourceForTracker_contextRecommendForConversation:(id)a0;
+ (id)currentMessageIdForConversation:(id)a0;
+ (void)p_deleteSDKMsgIfNeeded:(id)a0 inConversation:(id)a1;
+ (void)p_clearCurrentMsgIdForConversation:(id)a0;
+ (id)shareInstance;

- (void)setupScene:(unsigned long long)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)startGreetInfoRequestIfNeeded;
- (void)initNextServerRequestTime;
- (void)p_insertGreetNoticeIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)handleApplicaitonWillEnterForegroundNotification;
- (void)reuqestRecHelloInfoWithSceneIfNeeded:(unsigned long long)a0;
- (void)lazyInitNextServerRequestTime;
- (id)p_storageKeyWithIdenifier:(id)a0;
- (void)p_insertGreetNoticeWhenHandleContextRecommandWithConList:(id)a0 index:(unsigned long long)a1 singleInsertedNum:(unsigned long long)a2 groupInsertedNum:(unsigned long long)a3;
- (void)p_reuqestRecHelloInfoWithSceneIfNeeded:(unsigned long long)a0;
- (id)getContextRecommendDict;
- (void)p_reportWatchOnceSwitchStatus;
- (void)handleContextRecommendDict:(id)a0;
- (void)handleSilverWingDict:(id)a0;
- (void)handleWatchOnceSwitchDict:(id)a0;
- (id)p_localTypeEndTimeStr;
- (void)p_insertGreetTagIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)startGreetInfoIfNeededWhenAcountSwitch;
- (void).cxx_destruct;
- (id)init;
- (void)registerNotificationObserver;

@end
