@class NSString, AWEAntiAddictDayNightThresholdModel;

@interface AWEAntiAddictDayNightThresholdMap : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAntiAddictDayNightThresholdModel *halfPopupTime;
@property (retain, nonatomic) AWEAntiAddictDayNightThresholdModel *toastDayThreshold;
@property (retain, nonatomic) AWEAntiAddictDayNightThresholdModel *systemMaskDayThreshold;
@property (retain, nonatomic) AWEAntiAddictDayNightThresholdModel *forceMaskDayThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)halfPopupTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
