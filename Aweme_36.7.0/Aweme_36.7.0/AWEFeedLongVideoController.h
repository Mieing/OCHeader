@class AWEFeedLongVideoCellTracker, NSString, AWEAwemeModel;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedLongVideoController : AWEBaseController <AWEFeedTrackControllerListenerProtocol, AWEFeedControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *toReplaceModel;
@property (retain, nonatomic) AWEFeedLongVideoCellTracker *tracker;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ startPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)scrollViewDidScrollEndWithActive;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForEnterPersonalDetail;
- (void)onPaySuccessAndChangeModelNotification:(id)a0;
- (void)onChangePlayVideoNotification:(id)a0;
- (void)replaceVideo:(id)a0 withModel:(id)a1;
- (id)currentLongVideoWatermarkView;
- (void)showLongVideoWatermarkWithNeedRelayout:(BOOL)a0;
- (void)onFavoriteActionNotification:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)orientationChanged;
- (void)viewWillDisappear;

@end
