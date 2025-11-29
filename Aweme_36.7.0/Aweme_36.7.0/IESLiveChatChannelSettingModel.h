@interface IESLiveChatChannelSettingModel : NSObject

@property (nonatomic) BOOL enableChatChannelAudioChat;
@property (nonatomic) BOOL allowToInviteOthers;

- (BOOL)needUpdateWithModel:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
