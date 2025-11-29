@class NSString, NSDictionary, UIImage, AWECampaignImageModel;

@interface AWECampaignProfileActivityModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignImageModel *image;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) long long timeLimit;
@property (nonatomic) long long showScenery;
@property (retain, nonatomic) UIImage *profileActicityImage;
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
