@class NSArray, NSString;

@interface AWEOriginalAdModelMonitorRuleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL uri;
@property (copy, nonatomic) NSArray *styleTemplate;
@property (copy, nonatomic) NSArray *adData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
