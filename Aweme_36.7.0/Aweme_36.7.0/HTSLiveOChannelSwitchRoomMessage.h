@class HTSLiveCommon;

@interface HTSLiveOChannelSwitchRoomMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long micRoomId;

+ (id)descriptor;

@end
