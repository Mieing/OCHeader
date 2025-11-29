@class NSArray, BDSCResearchCardShowFrequencyControl, NSString, BDSCResearchCardDisableCondition;

@interface BDSCResearchCardConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) BDSCResearchCardShowFrequencyControl *frequencyControl;
@property (retain, nonatomic) BDSCResearchCardDisableCondition *disableCondition;
@property (copy, nonatomic) NSArray *strategies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
