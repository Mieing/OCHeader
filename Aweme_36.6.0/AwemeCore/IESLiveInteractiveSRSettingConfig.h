@class NSArray, NSDictionary, NSString;

@interface IESLiveInteractiveSRSettingConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL isAutoSRMode;
@property (nonatomic) double intervalInSec;
@property (copy, nonatomic) NSArray *layouts;
@property (nonatomic) BOOL isLayoutsExcludeEnable;
@property (copy, nonatomic) NSArray *srRatioConfigList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)srRatioConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)modelWithDictionary:(id)a0;


@end
