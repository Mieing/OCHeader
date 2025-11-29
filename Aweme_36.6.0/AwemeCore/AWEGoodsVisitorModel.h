@class NSArray, NSString;

@interface AWEGoodsVisitorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *visitorAvatars;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visitorAvatarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
