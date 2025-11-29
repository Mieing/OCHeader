@class NSDictionary, NSString;

@interface IESLiveInteractiveSRSettingRatioConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) long long srMode;
@property (nonatomic) float srRangeMin;
@property (nonatomic) float srRangeMax;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
