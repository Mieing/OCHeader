@class NSString, NSIndexPath;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedECommerceModuleController : AWEBaseController <AWEFeedControllerProtocol, AWEPlayVideoMessage, IESVideoPlayerDelegate, AWEFeedTrackControllerListenerProtocol>

@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (retain, nonatomic) NSIndexPath *didEndDisplayIndexPath;
@property (nonatomic) BOOL currentControllerShow;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginRefresh;
- (void)scrollViewDidScrollEndWithActive;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForEnterPersonalDetail;
- (void)saveCurrentJumpToMallObject;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidDisappear;

@end
