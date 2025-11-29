@class NSString, NSNumber;

@interface AWEPadSkyLightBannerCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bannerUrl;
@property (copy, nonatomic) NSString *shcemaUrl;
@property (copy, nonatomic) NSNumber *bannerID;
@property (copy, nonatomic) NSNumber *exitTime;
@property (copy, nonatomic) NSNumber *rotationTime;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
