@class NSString;

@interface InteractEffectResponse_QueryResult : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *effectId;

+ (id)descriptor;

@end
