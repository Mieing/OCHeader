@class NSArray, NSString;

@interface AWEVideoCoverEvaluateNormalSuggestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *verticalList;
@property (copy, nonatomic) NSArray *horizontalList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestCoverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
