@class NSNumber, NSString;

@interface AWEAntiAddictNoticeThresholdModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *pColdBootUserForce;
@property (copy, nonatomic) NSNumber *pColdBootSystemForce;
@property (copy, nonatomic) NSNumber *pColdBootUserNormal;
@property (copy, nonatomic) NSNumber *pColdBootSystemNormal;
@property (copy, nonatomic) NSNumber *pHotBootUserForce;
@property (copy, nonatomic) NSNumber *pHotBootSystemForce;
@property (copy, nonatomic) NSNumber *pHotBootUserNormal;
@property (copy, nonatomic) NSNumber *pHotBootSystemNormal;
@property (copy, nonatomic) NSNumber *pUserForceInterval;
@property (copy, nonatomic) NSNumber *pNonUserForceInterval;
@property (copy, nonatomic) NSNumber *pColdBootOnTimeVideoInterval;
@property (copy, nonatomic) NSNumber *pHotBootOnTimeVideoInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)hotBootOnTimeVideoInterval;
- (long long)coldBootSystemNormal;
- (long long)hotBootSystemNormal;
- (long long)nonUserForceInterval;
- (long long)coldBootSystemForce;
- (long long)hotBootSystemForce;
- (long long)coldBootOnTimeVideoInterval;
- (long long)coldBootUserNormal;
- (long long)hotBootUserNormal;
- (long long)coldBootUserForce;
- (long long)hotBootUserForce;
- (long long)userForceInterval;
- (void)updateColdBootSystemNormal:(long long)a0;
- (void)updateHotBootSystemNormal:(long long)a0;
- (void)updateNonUserForceInterval:(long long)a0;
- (void)updateColdBootUserNormal:(long long)a0;
- (void)updateHotBootUserNormal:(long long)a0;
- (void)updateColdBootSystemForce:(long long)a0;
- (void)updateHotBootSystemForce:(long long)a0;
- (void).cxx_destruct;

@end
