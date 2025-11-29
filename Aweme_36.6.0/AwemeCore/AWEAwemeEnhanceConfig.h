@class NSString, AWEAwemeEnhanceTreatment, AWELuckyCatPendant;

@interface AWEAwemeEnhanceConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWEAwemeEnhanceTreatment *treatment;
@property (copy, nonatomic) NSString *treatmentExtra;
@property (retain, nonatomic) AWELuckyCatPendant *countdownPendant;
@property (retain, nonatomic) AWELuckyCatPendant *liveGuidePendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
