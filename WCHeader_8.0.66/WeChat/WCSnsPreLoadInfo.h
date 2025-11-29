@class NSString;

@interface WCSnsPreLoadInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *layerId;
@property (retain, nonatomic) NSString *expId;
@property (nonatomic) BOOL sightAutoDownloadOn3GPlus;
@property (nonatomic) BOOL sightAutoDownloadOnWifi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_sightAutoDownloadOn3GPlus;
+ (void)PBArrayAdd_sightAutoDownloadOnWifi;
+ (void)initialize;

@end
