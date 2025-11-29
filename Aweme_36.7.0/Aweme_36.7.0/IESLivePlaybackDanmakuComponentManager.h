@class HTSEventContext, NSString, IESLivePlaybackComponentContext, NSMutableArray;

@interface IESLivePlaybackDanmakuComponentManager : NSObject <IESLivePlaybackDanmakuComponent, IESLivePlaybackDanmakuComponentManagerProtocol>

@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableArray *danmakuComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0 trackContext:(id)a1;

- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (id)initWithComponentContext:(id)a0 trackContext:(id)a1;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)setupDanmakuComponents;
- (void)danmakuComponentsDidMount;
- (id)needLoadComponents;
- (void)onDanmakuEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
