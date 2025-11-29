@class NSString;

@interface AWEAntiAddictLottieModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *geckoChannelName;
@property (nonatomic) long long lockTimeThreshold;
@property (nonatomic) long long lockTimeCountDown;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *iosResCDNUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
