@class NSArray, NSString;

@interface AWEIMRecommendGroupResponseModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *recommendGroupList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendGroupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
