@class NSString, AWEUGDesktopChannelGuideConfigModel;

@interface AWEUGDesktopChannelGuideResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) double cacheTime;
@property (retain, nonatomic) AWEUGDesktopChannelGuideConfigModel *guideConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
