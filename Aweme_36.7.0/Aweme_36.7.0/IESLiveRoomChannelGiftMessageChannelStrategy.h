@interface IESLiveRoomChannelGiftMessageChannelStrategy : IESLiveChannelMessageNodeStrategy

- (id)getDisplayText;
- (id)localNameColor;
- (void)assembleMessageListNode:(id)a0;
- (id)processDisplayText:(id)a0 needImagePlaceHolder:(id)a1 node:(id)a2;
- (void)updateNodeSize:(id)a0;
- (id)allIconList;
- (void)configUserNameAttributedString:(id)a0;

@end
