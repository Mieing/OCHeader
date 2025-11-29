@class HTSLiveRoomChannelInteractiveEmojiChatMessage;

@interface IESLiveRoomChannelInteractiveEmojiChatMessageChannelStrategy : IESLiveRoomChannelEmojiChatMessageChannelStrategy

@property (retain, nonatomic) HTSLiveRoomChannelInteractiveEmojiChatMessage *detailMessage;

- (id)getDisplayText;
- (void)assembleMessageListNode:(id)a0;
- (void)updateNodeSize:(id)a0;
- (id)allIconList;
- (id)chatChannelEmoticonModelWithDisplayName:(id)a0;
- (void).cxx_destruct;

@end
