@class NSString, UITableViewCell, AWEAwemeModel;

@interface AWEFeedMultiDeviceVideoPlaySyncController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedMultiDeviceSyncVideoPlayDelegate>

@property (copy, nonatomic) id /* block */ playProgressHandler;
@property (retain, nonatomic) AWEAwemeModel *modelNeedsPlay;
@property (nonatomic) long long playProgress;
@property (weak, nonatomic) UITableViewCell *willDisPlayCell;
@property (weak, nonatomic) AWEAwemeModel *willDisplayModel;
@property (nonatomic) BOOL needObservePlay;
@property (nonatomic) double lastCheckTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)showBottomNoti:(long long)a0;
- (BOOL)syncAvailableForPageList;
- (void)showGuideEntranceIfNeeded:(long long)a0;
- (long long)isOtherPopShow;
- (void)setVideoPlayProgerss;
- (BOOL)checkIfCurrentAwemeAvailable;
- (id)getCurrentPlayModelManually;
- (BOOL)insertVideoForMultiDeviceSyncWithModel:(id)a0 videoPlayProgress:(long long)a1 errorNumber:(id *)a2;
- (long long)checkIfHintShowAvailable;
- (BOOL)checkVCIsAppearing;
- (void)uploadVideoSyncRecordIfNeeded;
- (id)getModelSyncForFrontierIfNeeded;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
