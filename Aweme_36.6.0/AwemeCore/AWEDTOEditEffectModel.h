@class NSArray, NSString;

@interface AWEDTOEditEffectModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *displayRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayRangesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
