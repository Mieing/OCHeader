@interface AWEFeedProgressABConfig : NSObject

+ (BOOL)enableBottomTabScrollCell;
+ (long long)bottomTabScrollDistance;
+ (BOOL)bottomTabScrollDisablePlusBtn;
+ (long long)bottomTabScrollPlusDistance;
+ (BOOL)optimizeProgressBigFont;
+ (BOOL)enableProgressDragOpt;
+ (BOOL)enableProgressBackOpt;
+ (BOOL)enableProgressCurveOpt;
+ (BOOL)enableProgressStopLoading;
+ (BOOL)enableProgressContinueOpt;
+ (BOOL)enableSeekBarTrackProgress;
+ (BOOL)enableProgressLoadingRecognized;
+ (BOOL)enableHideUnderView;
+ (BOOL)enableProgressPreventRepeatTrack;
+ (BOOL)enableProgressAngle;
+ (BOOL)enableEnlargePreview;
+ (double)getEnlargePreviewRatio;
+ (double)getAdsorptionRange;
+ (double)getAdsorptionMinDuration;
+ (BOOL)enableProgressLoadOpt;
+ (double)progressAnimationTime;
+ (id)seekBarTrackProgressDict;
+ (id)progressEnlargePreviewDict;
+ (id)progressDragEnd;
+ (id)bottomTabScrollCell;
+ (BOOL)enableProgressDragEnd;
+ (long long)limitDurationDragEnd;
+ (id)blackListDragEnd;
+ (long long)progressScrollAngle;
+ (BOOL)enableAlbumLongPressSeek;
+ (id)sharedInstance;

@end
