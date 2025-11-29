@class HTSLiveCommon, RoomChannelInfo;

@interface HTSLiveRoomSecretCreateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;

+ (id)descriptor;

@end
