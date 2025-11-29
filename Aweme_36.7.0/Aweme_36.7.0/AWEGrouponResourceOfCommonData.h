@class NSString, NSDictionary, AWEGrouponResourceOfFrequencyInfo, AWEURLModel;

@interface AWEGrouponResourceOfCommonData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long loadType;
@property (copy, nonatomic) NSString *rawExposeData;
@property (copy, nonatomic) NSString *sceneSchema;
@property (copy, nonatomic) NSString *extraMap;
@property (retain, nonatomic) AWEGrouponResourceOfFrequencyInfo *frequencyData;
@property (copy, nonatomic) NSString *mallTrackParams;
@property (retain, nonatomic) AWEGrouponResourceOfFrequencyInfo *bottomFrequencyData;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) unsigned long long mallPopAvoidType;
@property (retain, nonatomic) AWEURLModel *bgImg;
@property (nonatomic) BOOL notAvoidBottomBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)frequencyDataJSONTransformer;
+ (id)bottomFrequencyDataJSONTransformer;

- (void).cxx_destruct;

@end
