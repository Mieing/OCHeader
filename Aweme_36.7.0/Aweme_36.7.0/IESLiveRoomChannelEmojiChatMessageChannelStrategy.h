@interface IESLiveRoomChannelEmojiChatMessageChannelStrategy : IESLiveChannelMessageNodeStrategy

- (id)getDisplayText;
- (void)assembleMessageListNode:(id)a0;
- (id)processDisplayText:(id)a0 needImagePlaceHolder:(id)a1 node:(id)a2;
- (void)updateNodeSize:(id)a0;
- (id)allIconList;
- (double)liveFontSize;
- (void)configUserNameAttributedString:(id)a0;
- (id)paragraphStyle;

@end
