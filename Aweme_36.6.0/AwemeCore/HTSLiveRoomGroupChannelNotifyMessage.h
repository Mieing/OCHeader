@class HTSLiveCommon;

@interface HTSLiveRoomGroupChannelNotifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long groupId;

+ (id)descriptor;

@end
