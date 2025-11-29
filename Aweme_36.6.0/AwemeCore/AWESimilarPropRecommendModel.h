@class NSString, AWEURLModel;

@interface AWESimilarPropRecommendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *propID;
@property (copy, nonatomic) NSString *propName;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (nonatomic) long long userCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
