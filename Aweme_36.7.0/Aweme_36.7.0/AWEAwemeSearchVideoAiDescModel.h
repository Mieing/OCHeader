@class NSString, AWEAwemeSearchVideoAiDescPrefixModel;

@interface AWEAwemeSearchVideoAiDescModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) AWEAwemeSearchVideoAiDescPrefixModel *prefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
