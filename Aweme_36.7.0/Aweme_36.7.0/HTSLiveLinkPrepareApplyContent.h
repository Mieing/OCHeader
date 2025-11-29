@class NSString;

@interface HTSLiveLinkPrepareApplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (nonatomic) long long vendor;
@property (copy, nonatomic) NSString *secFromUserId;
@property (nonatomic) long long count;

+ (id)descriptor;

@end
