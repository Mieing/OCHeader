@class NSString;
@protocol IESLiveMultiLinkerPreStreamProtocol;

@interface AWELivePreStreamMultiLinkerElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber, IESLiveMultiLinkerPreStreamDelegate, AWELivePreviewBusinessMessage, AWELiveRevenueSharePreStreamProtocol>

@property (retain, nonatomic) id<IESLiveMultiLinkerPreStreamProtocol> multiLinkerPreStreamImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)receiveChannelMessage:(id)a0;
- (void)audienceSmoothEnterRoomDidEnd;
- (void)createMultiLinkerPreStreamImpl;
- (void)trackLiveWindowClick;
- (void)didStartOnMultiLinker;
- (void)setupLiveRoomModel:(id)a0 preStreamContainer:(id)a1 previewStreamScene:(long long)a2;
- (void)videoAudioStreamPlayer_startToPlay;
- (void)videoAudioStreamPlayer_stop;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)prepareForReuse;
- (void)reset;
- (void)dealloc;

@end
