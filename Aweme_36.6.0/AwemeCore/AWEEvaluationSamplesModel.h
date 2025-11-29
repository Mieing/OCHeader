@class NSString, NSArray;

@interface AWEEvaluationSamplesModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoListName;
@property (copy, nonatomic) NSArray *videoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
