@class NSString;

@interface AWEStudioMusicListViewControllerBuilder : NSObject <AWEStudioMusicListViewControllerProtocol, ACCASSMusicListViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindContext:(id)a0 logType:(id)a1 data:(id)a2;
- (void)startMonitorWithContext:(id)a0 logType:(id)a1 data:(id)a2;
- (void)finishMonitorWithContext:(id)a0 logType:(id)a1 data:(id)a2;
- (Class)studioSingleMusicRecommendVideosTableCellClass;
- (id)initiaLStudioSingleMusicRecommenVideosTableViewCellWithReuseIdentifier:(id)a0;
- (double)singleMusicRecommenVideosTableViewCellHeightWithModel:(id)a0 isFirst:(BOOL)a1;
- (id)searchResponeParamsInfo:(id)a0 requestStartTime:(id)a1;
- (void)startScrollFpsMonitor;
- (void)endScrollFpsMonitor;
- (id)createMusicBottomPlayerViewWithDelegate:(id)a0;

@end
