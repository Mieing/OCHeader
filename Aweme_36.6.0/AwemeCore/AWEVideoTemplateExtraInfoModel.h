@class NSString, NSDictionary;

@interface AWEVideoTemplateExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *aspectRatio;
@property (copy, nonatomic) NSString *nleSummary;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) BOOL hasCommercialMusic;
@property (copy, nonatomic) NSString *recommendMusic;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
