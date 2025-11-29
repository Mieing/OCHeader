@class NSDictionary, IESLiveAioLinkFullLinkMeta, NSString;

@interface IESLiveAioLinkFullLinkRequest : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveAioLinkFullLinkMeta *meta;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
