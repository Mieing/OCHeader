@class NSString, NSArray, AWENearbyResourceOfFrequencyInfo;

@interface AWENearbyGrouponTabGuideModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long guideType;
@property (nonatomic) unsigned long long triggerTimingType;
@property (nonatomic) BOOL activeDaysCondition;
@property (nonatomic) BOOL enableGuideFromServer;
@property (copy, nonatomic) NSString *snackBarTitle;
@property (copy, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) NSArray *triggerList;
@property (retain, nonatomic) AWENearbyResourceOfFrequencyInfo *frequencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)frequencyDataJSONTransformer;
+ (id)triggerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
