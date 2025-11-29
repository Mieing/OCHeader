@class NSArray, NSString;

@interface AWEBatManXTokenInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *tokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokensJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
