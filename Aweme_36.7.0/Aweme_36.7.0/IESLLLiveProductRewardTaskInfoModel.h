@class IESLLLiveProductRewardTaskColorModel, IESLLLiveURLModel, NSString;

@interface IESLLLiveProductRewardTaskInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveProductRewardTaskColorModel *bgColorModel;
@property (retain, nonatomic) IESLLLiveURLModel *iconImageURL;
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
