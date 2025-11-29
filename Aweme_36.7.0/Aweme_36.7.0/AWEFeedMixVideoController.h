@class NSNumber, NSString, AWEAwemeModel;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedMixVideoController : AWEBaseController <AWEFeedTrackControllerListenerProtocol>

@property (retain, nonatomic) NSNumber *currentPlaybackRate;
@property (retain, nonatomic) AWEAwemeModel *toReplaceModel;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForEnterPersonalDetail;
- (void)onChangePlayVideoNotification:(id)a0;
- (void)onPreloadMixVideoNotification:(id)a0;
- (void)replaceVideo:(id)a0 withModel:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;

@end
