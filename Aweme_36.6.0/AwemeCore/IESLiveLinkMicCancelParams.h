@class NSString;

@interface IESLiveLinkMicCancelParams : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) long long toRoomId;
@property (nonatomic) long long toUserId;
@property (copy, nonatomic) NSString *secToUserId;
@property (nonatomic) long long scene;
@property (nonatomic) int cancelType;
@property (copy, nonatomic) NSString *requestSource;
@property (copy, nonatomic) NSString *signExtra;
@property (copy, nonatomic) NSString *toOpenId;

+ (id)descriptor;

@end
