@class NSString;

@interface AddSensitiveWordReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *secAnchorId;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *words;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
