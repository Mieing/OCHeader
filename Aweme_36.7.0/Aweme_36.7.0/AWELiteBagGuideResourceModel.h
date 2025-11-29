@class NSString, AWELiteBagGuideLottieResource;

@interface AWELiteBagGuideResourceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiteBagGuideLottieResource *lottieResource;
@property (copy, nonatomic) NSString *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
