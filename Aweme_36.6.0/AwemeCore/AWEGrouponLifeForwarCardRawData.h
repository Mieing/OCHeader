@class NSString, AWEGrouponResourceOfFrequencyInfo;

@interface AWEGrouponLifeForwarCardRawData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardRawData;
@property (retain, nonatomic) AWEGrouponResourceOfFrequencyInfo *frequencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)frequencyDataJSONTransformer;

- (void).cxx_destruct;

@end
