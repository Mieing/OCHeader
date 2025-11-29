@class AWELiveLocalLifeProductRewardTaskColorModel, NSString, AWEURLModel;

@interface AWELiveLocalLifeProductRewardTaskInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveLocalLifeProductRewardTaskColorModel *bgColorModel;
@property (retain, nonatomic) AWEURLModel *iconImageURL;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImageURLJSONTransformer;
+ (id)bgColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
