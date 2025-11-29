@class HTSLiveDisplayTextModel, NSString, NSDictionary, IESLiveImage;

@interface IESLiveBannerCollapse : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) HTSLiveDisplayTextModel *title;
@property (retain, nonatomic) IESLiveImage *backgroundImage;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL bannerEnable;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;


@end
