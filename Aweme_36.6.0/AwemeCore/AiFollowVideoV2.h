@class NSString;

@interface AiFollowVideoV2 : GPBMessage

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL hasEffectId;
@property (nonatomic) int seedVideoType;
@property (nonatomic) BOOL hasSeedVideoType;

+ (id)descriptor;

@end
