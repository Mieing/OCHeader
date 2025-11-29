@class NSString, NSArray, UIImage, AWECampaignImageModel, NSDictionary;

@interface AWECampaignPopupWindowModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignImageModel *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *linkSchema;
@property (copy, nonatomic) NSString *campaignName;
@property (copy, nonatomic) NSArray *campaignList;
@property (retain, nonatomic) UIImage *popupImage;
@property (nonatomic) BOOL isReady;
@property (nonatomic) unsigned long long imageStyle;
@property (nonatomic) BOOL showForAll;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;

@end
