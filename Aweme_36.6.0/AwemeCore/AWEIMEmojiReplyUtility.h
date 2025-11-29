@interface AWEIMEmojiReplyUtility : NSObject

+ (BOOL)hasSelfLovedMessage:(id)a0 key:(id)a1;
+ (id)findConfigForKey:(id)a0;
+ (BOOL)fakeRemoveEmojiWithKey:(id)a0 fromMessage:(id)a1;
+ (void)removeEmojiWithKey:(id)a0 fromMessage:(id)a1;
+ (id)fakeAddEmojiWithKey:(id)a0 toMessage:(id)a1 params:(id)a2;
+ (void)addEmojiWithKey:(id)a0 toMessage:(id)a1 replacedKey:(id)a2 context:(id)a3;
+ (BOOL)shouldHandleEmojiReplyInnerPush;
+ (id)propertyLovedBySelf:(id)a0 key:(id)a1;
+ (BOOL)shouldDisplayEmojiReplyViewWithMessageViewModel:(id)a0;
+ (double)emojiReplyTopMargin;
+ (BOOL)canReplyByEmojiWithMessage:(id)a0;
+ (double)emojiReplyHeight;
+ (id)propertyManager;
+ (void)p_trackSendMessageResponse:(id)a0 key:(id)a1 params:(id)a2 isSuccess:(BOOL)a3 statusCode:(int)a4;
+ (void)p_trackSendMessage:(id)a0 key:(id)a1 params:(id)a2;
+ (id)p_commonBizTrackerParams:(id)a0;
+ (id)findGroupForKey:(id)a0 inGroups:(id)a1;
+ (void)removeEmojiWithKey:(id)a0 senderUid:(id)a1 fromPropertyGroups:(id)a2 isFake:(BOOL)a3;
+ (void)p_timeSortPropertyGroups:(id)a0;
+ (id)propertyListOfPropertyGroups:(id)a0 withEmojiOnly:(BOOL)a1;
+ (id)propertyLovedBySelf:(id)a0;
+ (id)p_sendInfoCacheKey:(id)a0 uid:(id)a1 messageID:(id)a2;
+ (BOOL)fakeRemoveEmojiWithKey:(id)a0 fromMessage:(id)a1 context:(id)a2;
+ (id)emoticonAdapterDic;
+ (id)p_selfFrontTimeSortWithPropertyArray:(id)a0;
+ (void)sortProperties:(id)a0;
+ (id)propertyGroupsFromTTMsg:(id)a0;
+ (id)latestPropertyOfPropertyList:(id)a0;
+ (void)requestPropertyEmojiMardReadWithChat:(id)a0;
+ (BOOL)shouldBeDecidedByPlatformForMessage:(id)a0;
+ (void)removeEmojiWithKey:(id)a0 senderUid:(id)a1 fromPropertyGroups:(id)a2;
+ (void)sortPropertyGroups:(id)a0;
+ (BOOL)shouldChatBeReloadedFromMessagePropertyUpdateWithChat:(id)a0 message:(id)a1 reason:(long long)a2 needToUpdateActiveInfo:(BOOL)a3;
+ (id)displayTextForEmojiReplyWithPropertyItem:(id)a0 message:(id)a1 displayName:(id)a2 scene:(unsigned long long)a3;
+ (void)syncPropertyGroupsOrderWithMessage:(id)a0 updatedMessage:(id)a1;
+ (id)originPropertyListDictWithMessage:(id)a0;

@end
