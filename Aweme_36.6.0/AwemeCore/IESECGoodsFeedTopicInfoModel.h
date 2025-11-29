@class NSArray, NSString;

@interface IESECGoodsFeedTopicInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *topics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topicsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
