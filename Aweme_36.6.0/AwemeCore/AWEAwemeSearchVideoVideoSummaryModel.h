@class NSString, AWEAwemeSearchVideoVideoSummaryPrefixModel;

@interface AWEAwemeSearchVideoVideoSummaryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeSearchVideoVideoSummaryPrefixModel *prefix;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
