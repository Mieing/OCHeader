@interface CSJClickTriggerConfigModel : CSJBasicModel

@property (nonatomic) long long clickTriggerType;
@property (nonatomic) double shakeStartTime;
@property (nonatomic) double shakeEndTime;

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)a0;

- (id)toDictionary;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
