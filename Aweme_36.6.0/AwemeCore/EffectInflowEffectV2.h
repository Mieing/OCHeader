@class NSString;

@interface EffectInflowEffectV2 : GPBMessage

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL hasEffectId;
@property (nonatomic) BOOL isFavorited;
@property (nonatomic) BOOL hasIsFavorited;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *effectSourceId;
@property (nonatomic) BOOL hasEffectSourceId;

+ (id)descriptor;

@end
