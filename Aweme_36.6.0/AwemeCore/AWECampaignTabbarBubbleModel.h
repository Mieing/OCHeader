@class NSString, NSDictionary, UIImage, AWECampaignImageModel, NSNumber;

@interface AWECampaignTabbarBubbleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECampaignImageModel *image;
@property (retain, nonatomic) UIImage *bubbleImage;
@property (retain, nonatomic) NSNumber *disappearThreshold;
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
