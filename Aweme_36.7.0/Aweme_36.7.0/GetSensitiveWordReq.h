@class NSString;

@interface GetSensitiveWordReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *secAnchorId;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
