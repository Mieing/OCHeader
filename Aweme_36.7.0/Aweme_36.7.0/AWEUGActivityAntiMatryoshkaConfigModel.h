@class NSArray, NSString;

@interface AWEUGActivityAntiMatryoshkaConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scenesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
