@class NSString;

@interface AWELuckyCatLottieResource : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lottieUrl;
@property (copy, nonatomic) NSString *lottieMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
