@class NSString;

@interface InteractionData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long appType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int interactionType;

+ (id)descriptor;

@end
