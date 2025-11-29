@class NSString, AWEURLModel;

@interface AWEVideoCoverEvaluateAiCoverModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
