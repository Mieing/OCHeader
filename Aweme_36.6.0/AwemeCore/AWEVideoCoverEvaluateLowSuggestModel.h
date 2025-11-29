@class NSString, NSDictionary;

@interface AWEVideoCoverEvaluateLowSuggestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *problemKey;
@property (copy, nonatomic) NSDictionary *url;
@property (copy, nonatomic) NSString *problemTitle;
@property (copy, nonatomic) NSString *problemCaption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lowSuggestListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
