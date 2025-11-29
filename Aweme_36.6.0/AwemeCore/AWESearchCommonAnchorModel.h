@class NSArray, NSString;

@interface AWESearchCommonAnchorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *suggestWords;
@property (nonatomic) BOOL disableDisplayBarInner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestWordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
