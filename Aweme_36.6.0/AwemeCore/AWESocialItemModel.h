@class NSString, AWEAwemeModel, AWEStory24CoverModel, AWEStory24BlurModel;

@interface AWESocialItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemType;
@property (copy, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) AWEStory24BlurModel *story24BlurModel;
@property (copy, nonatomic) AWEStory24CoverModel *story24Model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeModelJSONTransformer;
+ (id)story24BlurModelJSONTransformer;
+ (id)story24ModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
