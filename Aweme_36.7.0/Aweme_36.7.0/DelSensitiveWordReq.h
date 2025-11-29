@class NSString;

@interface DelSensitiveWordReq : IESLivePBBaseMessage

@property (nonatomic) long long wordId;
@property (copy, nonatomic) NSString *secAnchorId;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
