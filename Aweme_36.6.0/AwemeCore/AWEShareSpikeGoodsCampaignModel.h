@class NSString, NSArray, AWEECShareCampaignExtraInfo, NSNumber, AWEURLModel;

@interface AWEShareSpikeGoodsCampaignModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *subTitles;
@property (retain, nonatomic) NSNumber *endTime;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEURLModel *backgroundImg;
@property (retain, nonatomic) AWEURLModel *priceBackgroundImg;
@property (retain, nonatomic) AWEURLModel *titleImg;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEECShareCampaignExtraInfo *campaignExtra;
@property (copy, nonatomic) NSString *shareDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundImgJSONTransformer;
+ (id)priceBackgroundImgJSONTransformer;
+ (id)titleImgJSONTransformer;
+ (id)extraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
