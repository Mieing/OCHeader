@class NSDictionary, NSArray, NSString;

@interface AWESearchAIGCStructModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long layoutType;
@property (copy, nonatomic) NSDictionary *layoutInfoDict;
@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *dataId;
@property (copy, nonatomic) NSString *renderId;
@property (copy, nonatomic) NSString *nodeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutTypeJSONTransformer;
+ (id)renderIdJSONTransformer;
+ (id)dataIdJSONTransformer;
+ (id)nodeIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

- (void).cxx_destruct;

@end
