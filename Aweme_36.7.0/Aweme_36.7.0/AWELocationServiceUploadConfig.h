@class NSNumber;

@interface AWELocationServiceUploadConfig : NSObject

@property (nonatomic) BOOL shouldCollect;
@property (nonatomic) BOOL shouldCollectLocation;
@property (nonatomic) BOOL shouldReportGPS;
@property (nonatomic) BOOL shouldReportWifi;
@property (nonatomic) BOOL shouldReportBss;
@property (nonatomic) BOOL shouldReportDeviceInfo;
@property (copy, nonatomic) NSNumber *reportInterval;
@property (nonatomic) BOOL pollAtOnce;
@property (nonatomic) BOOL bdugLocationABImpl;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
