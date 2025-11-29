@class NSString;

@interface SubscribeCardInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) BOOL isMember;
@property (nonatomic) long long newRoomId;

+ (id)descriptor;

@end
