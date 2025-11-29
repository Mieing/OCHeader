@class NSString, HMDThreadSafeDictionary, NSArray, NSMutableArray;

@interface AWEIMMessageEmoticonReplyManager : HTSService <AWEUserMessage, IESIMMessageEmoticonReplyManagerProtocol>

@property (retain, nonatomic) HMDThreadSafeDictionary *conversationDic;
@property (retain, nonatomic) HMDThreadSafeDictionary *conversationNameDic;
@property (nonatomic) BOOL recentChanged;
@property (retain, nonatomic) NSMutableArray *mRecentEmoticonArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *recentEmoticonArray;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)removeWithConversationID:(id)a0;
- (void)updateRecentEmoticonWithModel:(id)a0;
- (void)handleApplicationWillTerminationNty:(id)a0;
- (void)updateWithConversation:(id)a0;
- (void)loadDiskCacheRecentEmoticonIfPossible;
- (id)p_keyWithConversationID:(id)a0;
- (void)p_diskCacheRecentEmoticonIfNeeded;
- (id)p_rencentEmoticonKey;
- (id)conversationWithConversationID:(id)a0;
- (id)nameDictionaryWithConversationID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
