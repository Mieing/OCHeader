@class NSNumber, NSString, UIColor;

@interface HTSVideoSepcialEffect : NSObject

@property (retain, nonatomic) NSNumber *timeEffectId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *animatedImageName;
@property (nonatomic) long long timeMachineType;
@property (nonatomic) double beginTime;
@property (retain, nonatomic) UIColor *effectColor;
@property (nonatomic) BOOL forbidden;

+ (void)resetForbid;
+ (id)effectColorWithType:(long long)a0;
+ (id)descriptionWithType:(long long)a0;
+ (id)allEffects;
+ (id)effectWithType:(long long)a0;

- (void)resetForbid;
- (id)effectColorWithType:(long long)a0;
- (id)descriptionWithType:(long long)a0;
- (void).cxx_destruct;
- (id)allEffects;
- (id)effectWithType:(long long)a0;

@end
