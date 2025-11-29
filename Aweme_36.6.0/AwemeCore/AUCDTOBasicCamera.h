@class AUCDTOBasicCameraMediaType, NSDictionary, NSNumber, AUCDTOBasicCameraRecordDuration;

@interface AUCDTOBasicCamera : MTLModel

@property (retain, nonatomic) AUCDTOBasicCameraMediaType *mediaType;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL supportPressToVideo;
@property (nonatomic) BOOL supportSegmentVideo;
@property (nonatomic) BOOL recordMustNeedMicro;
@property (retain, nonatomic) AUCDTOBasicCameraRecordDuration *recordDuration;
@property (copy, nonatomic) NSNumber *defaultRecordMode;
@property (nonatomic) BOOL noNeedStoryMode;
@property (nonatomic) BOOL isSupportPhotoAndVideoModeUIWithMainCaptureStatus;
@property (nonatomic) BOOL isSupportPressToVideoHiddenTipsStatus;
@property (copy, nonatomic) NSDictionary *customRecordModeTitle;

- (void).cxx_destruct;
- (id)init;

@end
