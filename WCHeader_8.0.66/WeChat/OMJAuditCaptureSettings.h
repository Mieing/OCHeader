@class NSString;

@interface OMJAuditCaptureSettings : NSObject

@property (readonly, nonatomic) unsigned long long captureDimensionLevel;
@property (readonly, nonatomic) double captureFrameInterval;
@property (readonly, nonatomic) long long outputType;
@property (readonly, copy, nonatomic) NSString *outputDirPath;
@property (readonly, copy, nonatomic) NSString *outputFilenameBase;

+ (id)wcmj_defaultSettings;
+ (id)wcmj_defaultSettingsWithOutputDirPath:(id)a0 captureFrameInterval:(double)a1;

- (id)initWithCaptureDimensionLevel:(unsigned long long)a0 captureFrameInterval:(double)a1 outputType:(long long)a2 outputDirPath:(id)a3 outputFilenameBase:(id)a4;
- (void).cxx_destruct;

@end
