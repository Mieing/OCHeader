@class NSString;

@interface HTSLiveCloudCollaborateData : IESLivePBBaseMessage

@property (nonatomic) long long collaborateRoomId;
@property (copy, nonatomic) NSString *collaborateRoomIdStr;
@property (nonatomic) long long rejoinTime;

+ (id)descriptor;

@end
