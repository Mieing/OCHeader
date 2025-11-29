@class NSString, NSDictionary, UIImage, AWECampaignImageModel;

@interface AWECampaignLoginBannerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignImageModel *image;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *loginBannerImage;
@property (nonatomic) BOOL isReady;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
