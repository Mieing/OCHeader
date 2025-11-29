@class NSString;

@interface UserLiveStatus : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (nonatomic) long long roomId;
@property (nonatomic) int liveStatus;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *filterReason;
@property (nonatomic) long long adType;
@property (copy, nonatomic) NSString *msg;

+ (id)descriptor;

- (id)msg;
- (long long)adType;
- (id)filterReason;
- (int)liveStatus;
- (long long)userId;
- (long long)roomId;

@end
