@class NSString, NSArray;

@interface AWEFeedActivityTopBarItemConfig : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
