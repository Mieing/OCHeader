@class NSString;

@interface HTSLiveAnchorInstantPlayChangeInfo : IESLivePBBaseMessage

@property (nonatomic) long long toggleOnStatus;
@property (nonatomic) int requirementEnum;
@property (copy, nonatomic) NSString *microGameId;

+ (id)descriptor;

@end
