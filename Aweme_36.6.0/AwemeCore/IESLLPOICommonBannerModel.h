@class IESLLifeURLModel, NSString;

@interface IESLLPOICommonBannerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLifeURLModel *bannerUrl;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
