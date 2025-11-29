@interface WCFinderRoutineReport : NSObject

+ (void)clickShareActionWithSence:(int)a0 megaVideo:(id)a1;
+ (void)clickAvatarActionWithSence:(int)a0 megaVideo:(id)a1;
+ (void)reportStayTimeWithSence:(int)a0 duration:(unsigned long long)a1 megaVideo:(id)a2 isFullScreen:(BOOL)a3;
+ (void)reportExposeDurationWithSence:(int)a0 duration:(unsigned long long)a1 megaVideo:(id)a2 isFullScreen:(BOOL)a3;
+ (void)reportMaxVideoPlayTimeWithSence:(int)a0 maxPlayTime:(long long)a1 megaVideo:(id)a2;
+ (void)reportShareActionWithScene:(int)a0 shareType:(unsigned long long)a1 username:(id)a2 megaVideo:(id)a3;
+ (void)reportCancelShareActionWithScene:(int)a0 shareType:(unsigned long long)a1 megaVideo:(id)a2;
+ (void)reportFavouriteWithSence:(int)a0 megaVideo:(id)a1;
+ (void)exitFinder;
+ (void)enterFinderWithSence:(unsigned long long)a0;
+ (void)clickShareActionWithSence:(int)a0 contentVM:(id)a1;
+ (void)clickAvatarActionWithSence:(int)a0 contentVM:(id)a1;
+ (void)clickAvatarActionWithSence:(int)a0 avatarType:(unsigned long long)a1 contentVM:(id)a2;
+ (void)clickCommentActionWithSence:(int)a0 contentVM:(id)a1;
+ (void)clickFullTextActionWithSence:(int)a0 objectId:(id)a1;
+ (void)reportStayTimeWithSence:(int)a0 contentVM:(id)a1 duration:(unsigned long long)a2 isFullScreen:(BOOL)a3 firstVideoDataSource:(unsigned long long)a4;
+ (void)reportBitFeatureWithSence:(int)a0 objectId:(id)a1 bitFeature:(unsigned long long)a2;
+ (void)reportReplayCountWithSence:(int)a0 objectId:(id)a1 replayCount:(unsigned long long)a2;
+ (void)reportPhotoTurningWithSence:(int)a0 dataItem:(id)a1 duration:(long long)a2 lastIndex:(unsigned long long)a3 currentIndex:(unsigned long long)a4 isManual:(BOOL)a5;
+ (void)reportMaxVideoPlayTimeWithSence:(int)a0 dataItem:(id)a1 maxPlayTime:(long long)a2;
+ (void)reportShareActionWithScene:(int)a0 contentVM:(id)a1 shareType:(unsigned long long)a2 username:(id)a3;
+ (void)reportShareActionWithScene:(int)a0 objectId:(id)a1 shareType:(unsigned long long)a2 username:(id)a3;
+ (void)reportShareActionWithScene:(int)a0 objectId:(id)a1 readType:(int)a2 shareType:(unsigned long long)a3 username:(id)a4;
+ (void)reportCancelShareActionWithScene:(int)a0 objectId:(id)a1 shareType:(unsigned long long)a2;
+ (void)reportExposeDurationWithSence:(int)a0 dataItem:(id)a1 duration:(unsigned long long)a2 mediaType:(unsigned long long)a3 isFullScreen:(BOOL)a4;
+ (void)reportExposeDurationWithSence:(int)a0 dataItem:(id)a1 duration:(unsigned long long)a2 mediaType:(unsigned long long)a3 isFullScreen:(BOOL)a4 feedClientInfo:(id)a5;
+ (void)reportVideoSeekActionWithSence:(int)a0 objectId:(id)a1 actionValue:(long long)a2;
+ (void)reportFavouriteWithSence:(int)a0 contentVM:(id)a1;
+ (void)reportInfo:(id)a0;
+ (void)_fillDataItemWithDataItem:(id)a0 reportInfo:(id)a1;

@end
