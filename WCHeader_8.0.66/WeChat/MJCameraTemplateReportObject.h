@class NSString;

@interface MJCameraTemplateReportObject : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileCount;
@property (nonatomic) double captureFrameInterval;

+ (id)cameraTemplateReportObjKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
