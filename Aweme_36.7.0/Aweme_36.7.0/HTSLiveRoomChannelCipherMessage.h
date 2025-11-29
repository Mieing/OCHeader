@class HTSLiveRoomChannelChatMessage, HTSLiveCommon;

@interface HTSLiveRoomChannelCipherMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoomChannelChatMessage *chatMessage;
@property (nonatomic) BOOL hasChatMessage;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
