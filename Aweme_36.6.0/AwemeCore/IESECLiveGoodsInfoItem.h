@class IESECLiveGoodsElasticTitleLineModel, NSArray, IESECLiveGoodsProgressBarModel, NSString, IESECLivePlatformTagsModel;

@interface IESECLiveGoodsInfoItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long infoType;
@property (retain, nonatomic) IESECLiveGoodsElasticTitleLineModel *elasticTitle;
@property (retain, nonatomic) NSArray *tag;
@property (retain, nonatomic) IESECLivePlatformTagsModel *platformTags;
@property (retain, nonatomic) NSArray *benefitLabel;
@property (retain, nonatomic) IESECLiveGoodsProgressBarModel *progressBar;
@property (retain, nonatomic) NSArray *customTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagJSONTransformer;
+ (id)customTagJSONTransformer;
+ (id)benefitLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
