@interface AWEVideoMergeProcessData : NSObject

+ (BOOL)isLivePhotoMode:(id)a0;
+ (BOOL)useNewMudule:(id)a0;
+ (id)createProcessDataWithPublishModel:(id)a0 stageScene:(long long)a1;
+ (id)createProcessDataWithPublishModel:(id)a0;
+ (void)configLivePlaybackWaterMark:(id)a0 publishModel:(id)a1 preview:(id)a2;

@end
