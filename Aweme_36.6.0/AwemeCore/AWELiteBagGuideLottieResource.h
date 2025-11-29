@class NSString;

@interface AWELiteBagGuideLottieResource : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lottieURL;
@property (copy, nonatomic) NSString *lottieMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
