@class NSString;

@interface LVDraftMigrationTask550 : LVDraftMigrationTask

@property (copy, nonatomic) NSString *rootPath;

- (id)draftPath;
- (void)migrateDraft:(id)a0;
- (id)recursiveToMutable:(id)a0;
- (void)backup:(id)a0;
- (void)processVideoSize:(id)a0;
- (void)processTime:(id)a0 error:(id *)a1;
- (void)processArticleVideoTracks:(id)a0;
- (void)processCoverDraft:(id)a0 error:(id *)a1;
- (id)loadExtraInfo;
- (void)processArticleVideoExtraInfo:(id)a0 extraInfo:(id)a1;
- (void)processLinkageInfo:(id)a0 extraInfo:(id)a1;
- (void)removeWavePoints;
- (id)processTimeRange:(id)a0;
- (long long)microsecondsWithTime:(long long)a0;
- (void)processKeyframe:(id)a0 withName:(id)a1;
- (id)createTrackWithType:(id)a0 segments:(id)a1;
- (void).cxx_destruct;

@end
