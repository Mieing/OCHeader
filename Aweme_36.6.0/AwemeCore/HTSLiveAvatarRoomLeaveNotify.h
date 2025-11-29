@class NSString;

@interface HTSLiveAvatarRoomLeaveNotify : IESLivePBBaseMessage

@property (nonatomic) int leaveReason;
@property (nonatomic) long long formatId;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long lastPingTime;

+ (id)descriptor;

@end
