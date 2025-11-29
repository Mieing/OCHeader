@class BDWebImageCustomConfig, BDWebImageGeneralConfig, NSString;

@interface BDWebImageCloudConfig : NSObject <BDModelCustom>

@property (retain, nonatomic) BDWebImageCustomConfig *customConfig;
@property (retain, nonatomic) BDWebImageGeneralConfig *generalConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
