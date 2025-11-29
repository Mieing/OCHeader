@class NSString, NSArray;

@interface AWEFeedPlayableAlphaVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *section;
@property (copy, nonatomic) NSArray *steps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stepsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
