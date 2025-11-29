@class AWEStudioCameraRecordVideoParamsModel, AWEStudioCameraPictureQualityModel, AWERecordFlowUseData, NSNumber;

@interface AWEStudioCameraAction : NSObject

@property (nonatomic) unsigned long long source;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordTime;
@property (nonatomic) unsigned long long step;
@property (nonatomic) unsigned long long takePictureType;
@property (retain, nonatomic) AWEStudioCameraPictureQualityModel *takePictureQuality;
@property (nonatomic) double recordVideoDegradeTakePictureThreshold;
@property (nonatomic) BOOL forbidRecordVideoDegradeTakePicture;
@property (nonatomic) long long recordFragmentCount;
@property (retain, nonatomic) AWEStudioCameraRecordVideoParamsModel *recordVideoParams;
@property (retain, nonatomic) AWERecordFlowUseData *useData;
@property (copy, nonatomic) id /* block */ recordRecordVideoDegradeTakePictureBlock;
@property (copy, nonatomic) NSNumber *enableCapturePreviewImageWithOriginalImage;
@property (copy, nonatomic) NSNumber *forceEnableTorch;

- (void).cxx_destruct;
- (id)init;

@end
