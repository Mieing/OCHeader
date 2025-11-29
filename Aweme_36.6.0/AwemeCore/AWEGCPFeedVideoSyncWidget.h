@class NSString, AWEAwemeModel;
@protocol AWEFeedTableViewCellViewControllerProtocol, AWEGCPVideoContainerRouter, AWEGCPGameFeedVideoProtocol;

@interface AWEGCPFeedVideoSyncWidget : IESGCPBaseWidget <AWEGCPFeedVideoSyncRouter>

@property (weak, nonatomic) id<AWEGCPVideoContainerRouter> videoContainerRouter;
@property (weak, nonatomic) id<AWEGCPGameFeedVideoProtocol> detailVideoView;
@property (nonatomic) BOOL syncFeedVideoWhenDetailClose;
@property (readonly, weak, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly, weak, nonatomic) id<AWEFeedTableViewCellViewControllerProtocol> feedCellController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)widgetShouldBeActivatedWithDIContext:(id)a0;

- (void)widgetDidCreate;
- (void)willCloseGameDetailView:(BOOL)a0;
- (void)didCloseGameDetailView;
- (void)widgetBindService;
- (BOOL)isFeedVideoPauseBySingleClick;
- (void)syncGameFeedVideoStatesFromFeedCell:(id)a0;
- (void)syncGameFeedVideoStatesToFeedCell:(id)a0;
- (double)getFeedCellVideoCurrentPlayTime;
- (BOOL)isAlbumVideo;
- (long long)getFeedCellVideoCurrentImageIndex;
- (void)seekFeedCellVideoPlayTime:(double)a0 imageIndex:(long long)a1 isAlbumVideo:(BOOL)a2;
- (id)richContentVideoController;
- (void).cxx_destruct;

@end
