@class NSString, AWEURLModel;

@interface AWEStudioAIGCResource : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long mediaType;
@property (nonatomic) long long materialType;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) AWEURLModel *url;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;

- (void).cxx_destruct;

@end
