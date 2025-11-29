@class NSString;

@interface ACCVideoConfigDouyin : NSObject <ACCVideoConfigProtocol>

@property (nonatomic) long long videoLenthMode;
@property (nonatomic) unsigned long long beautifyType;
@property (nonatomic) long long faceDetectInterval;
@property (nonatomic) double reshapeLevelMax;
@property (nonatomic) double reshapeLevelDefault;
@property (nonatomic) double smoothLevelMax;
@property (nonatomic) double smoothLevelDefault;
@property (nonatomic) double faceLiftValueMax;
@property (nonatomic) double faceLiftValueDefault;
@property (nonatomic) double bigEyeValueMax;
@property (nonatomic) double bigEyeValueDefault;
@property (nonatomic) double lipstickValueMax;
@property (nonatomic) double lipstickValueDefault;
@property (nonatomic) double blusherValueMax;
@property (nonatomic) double blusherValueDefault;
@property (nonatomic) double sharpenValueMax;
@property (nonatomic) double sharpenValueDefault;
@property (nonatomic) long long videoMinSeconds;
@property (nonatomic) long long videoMaxSeconds;
@property (nonatomic) long long videoSelectableMinSeconds;
@property (nonatomic) long long videoSelectableMaxSeconds;
@property (nonatomic) double minVideoRatio;
@property (nonatomic) double maxVideoRatio;
@property (nonatomic) long long videoResolution;
@property (nonatomic) long long duetVideoMinSeconds;
@property (nonatomic) long long duetVideoMaxSeconds;
@property (nonatomic) long long longVideoMaxSeconds;
@property (nonatomic) long long standardVideoMaxSeconds;
@property (nonatomic) long long videoUploadMaxSeconds;
@property (nonatomic) long long videoFromLvUploadMaxSeconds;
@property (nonatomic) long long musicMaxSeconds;
@property (nonatomic) double longVideoDurationLowerLimit;
@property (nonatomic) long long minAssetsSelectionCount;
@property (nonatomic) long long maxAssetsSelectionCount;
@property (readonly, nonatomic) long long threeMinVideoMaxSeconds;
@property (readonly, nonatomic) long long clipVideoInitialMaxSeconds;
@property (readonly, nonatomic) long long clipVideoFromLvInitialMaxSeconds;
@property (readonly, nonatomic) BOOL isLimitInitialMaxSeconds;
@property (readonly, nonatomic) BOOL isReshoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentVideoLenthMode;
- (long long)currentVideoMaxSeconds;
- (void)updateCurrentVideoLenthMode:(long long)a0;
- (void)updateStandardVideoMaxSeconds:(double)a0;
- (void)updateVideoMinSeconds:(double)a0;
- (BOOL)showTitleInVideoCameraBottomView;
- (long long)publishMaxTitleLength;
- (BOOL)allowUploadLongVideo;
- (BOOL)needIsLongVideoParameter;
- (BOOL)limitMusicAccordingLongVideo;
- (BOOL)allowUploadSinglePhoto;
- (long long)getDuetVideoMaxSeconds;
- (BOOL)enableUploadClientBOE;
- (BOOL)supportNewBeautify;
- (id)init;

@end
