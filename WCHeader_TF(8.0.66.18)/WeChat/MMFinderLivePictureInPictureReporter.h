@class MMFinderLiveTaskId;

@interface MMFinderLivePictureInPictureReporter : NSObject

@property (nonatomic) unsigned long long pipStartTime;
@property (nonatomic) unsigned long long lastPauseTime;
@property (nonatomic) unsigned long long pauseDuration;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;

- (void)reportForStartPictureInPicture;
- (void)reportForStopPictureInPicture;
- (void)reportForClosePictureInPicture;
- (void)reportForRestorePictureInPicture;
- (void)reportForPausePictureInPicture;
- (void)reportForResumePictureInPicture;
- (void)onPictureInPicturePause;
- (void)onPictureInPictureResume;
- (id)audienceLogReporter;
- (unsigned long long)getLastEnterMode;
- (void)clearLastDatas;
- (void).cxx_destruct;

@end
