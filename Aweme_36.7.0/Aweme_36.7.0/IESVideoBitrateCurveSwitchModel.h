@class NSArray, NSString;

@interface IESVideoBitrateCurveSwitchModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *bitrateCurveConfigList;
@property (retain, nonatomic) NSArray *multiPriorityConfigList;
@property (retain, nonatomic) NSArray *singlePriorityConfigList;
@property (nonatomic) BOOL bitrateCurveSwitch;
@property (retain, nonatomic) NSArray *bitratePriorityConfigList;
@property (retain, nonatomic) NSString *bitrateCurveTagsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bitrateCurveConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
