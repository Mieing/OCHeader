@class NSString;

@interface BDWebImageGeneralConfig : NSObject <BDModelCustom>

@property (nonatomic) unsigned long long fetchInterval;
@property (nonatomic) unsigned long long remoteConfigTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
