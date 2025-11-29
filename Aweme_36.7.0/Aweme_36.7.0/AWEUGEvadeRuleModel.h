@class NSArray, NSString, AWEUGHostInfoModel;

@interface AWEUGEvadeRuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *videoType;
@property (copy, nonatomic) NSArray *page;
@property (retain, nonatomic) AWEUGHostInfoModel *hostInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
