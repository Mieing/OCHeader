@class AWEIMMessageConversation, NSArray, NSPointerArray, NSString, AWEIMInteractiveEmojiMatchModel, AWEIMInterEmojiMatcherController, AWEIMMessage;

@interface AWEIMInterEmojiBaseMatcher : NSObject <AWEIMInterEmojiMatcherDataSource>

@property (weak, nonatomic) AWEIMInterEmojiMatcherController *parent;
@property (retain, nonatomic) NSArray *filteredResult;
@property (retain, nonatomic) NSPointerArray *fromMessages;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) AWEIMInteractiveEmojiMatchModel *emojiIDsMatchModel;
@property (readonly, nonatomic) NSString *lastMsgEmojiID;
@property (readonly, nonatomic) NSString *lastMsgEmojiName;
@property (readonly, nonatomic) NSString *lastMsgEmojiKey;
@property (readonly, weak, nonatomic) AWEIMMessage *lastMessage;
@property (readonly, weak, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setEmojiShownMaxIndex:(long long)a0 forConversation:(id)a1;
- (long long)p_emojiShownMaxIndex:(id)a0;
- (BOOL)isRelationEnable:(id)a0;
- (void)markCombineEmojiMaxIndex;
- (long long)currentCombineEmojiMaxIndex;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;

@end
