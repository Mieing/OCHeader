@interface IESLiveRoomChannelChatMessageChannelStrategy : IESLiveChannelMessageNodeStrategy

@property (nonatomic) BOOL needLargeEmoji;

- (id)getDisplayText;
- (void)assembleMessageListNode:(id)a0;
- (void)updateNodeSize:(id)a0;
- (id)allIconList;
- (double)liveFontSize;
- (id)createNode;
- (void)configUserNameAttributedString:(id)a0;
- (id)configChatContent:(id)a0;

@end
