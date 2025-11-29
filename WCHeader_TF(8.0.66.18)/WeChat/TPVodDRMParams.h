@interface TPVodDRMParams : NSObject

@property (nonatomic) long long drmType;
@property (nonatomic) long long secureLevel;
@property (nonatomic) unsigned long long prepareStimeMs;
@property (nonatomic) unsigned long long prepareEtimeMs;
@property (nonatomic) unsigned long long certificateStimeMs;
@property (nonatomic) unsigned long long certificateEtimeMs;
@property (nonatomic) unsigned long long licenseStimeMs;
@property (nonatomic) unsigned long long licenseEtimeMs;

- (id)init;

@end
