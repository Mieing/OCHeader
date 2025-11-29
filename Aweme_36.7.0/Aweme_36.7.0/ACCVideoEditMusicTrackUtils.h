@interface ACCVideoEditMusicTrackUtils : NSObject

+ (void)trackForMusicPanelDownloadMusicStream:(BOOL)a0 startTime:(double)a1 status:(BOOL)a2 extraTrack:(id)a3;
+ (void)trackForMusicPanelDownloadMusicEditPageStream:(BOOL)a0 startTime:(double)a1 status:(BOOL)a2 extraTrack:(id)a3;
+ (void)trackForMusicPanelDownloadMusicEditPage:(BOOL)a0 startTime:(double)a1 status:(BOOL)a2 extraTrack:(id)a3;
+ (void)trackForPreloadRecommendMusicListWithPublishViewModel:(id)a0 preloadType:(unsigned long long)a1 extraParams:(id)a2;
+ (id)audioInfoTrackParamsWithPublishModel:(id)a0;

@end
