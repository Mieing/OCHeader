@class NSString, IESLiveKTVSongIndicatorView, UIView;
@protocol IESLiveKTVPreStreamDataSource, IESHYContainerProtocol, IESLiveRoomService;

@interface IESLiveKTVFeedView : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) IESLiveKTVSongIndicatorView *indicator;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (nonatomic) BOOL isOversea;
@property (nonatomic) BOOL isVideoChorusStarted;
@property (weak, nonatomic) id<IESLiveKTVPreStreamDataSource> dataSource;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (void)startAnimationIfNeed;
- (void)removeKTVIndicator;
- (void)setUpIndicator;
- (void)receiveKTVSei:(id)a0;
- (void)receiveMidiSei:(id)a0;
- (void)updateVideoChorusStarted:(BOOL)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)reset;

@end
