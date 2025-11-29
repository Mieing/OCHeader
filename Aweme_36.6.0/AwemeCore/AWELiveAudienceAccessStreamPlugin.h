@class AWEAwemeLiveViewCellPreloader, AWELiveAudienceAccessContext, NSString;

@interface AWELiveAudienceAccessStreamPlugin : NSObject <AWELiveAudienceAccessPluginProtocol>

@property (retain, nonatomic) AWELiveAudienceAccessContext *context;
@property (retain, nonatomic) AWEAwemeLiveViewCellPreloader *preloader;
@property (retain, nonatomic) AWEAwemeLiveViewCellPreloader *streamPreloader;
@property (nonatomic) long long preloaderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mute:(BOOL)a0;
- (void)prePullStream;
- (id)dequeuePlayer;
- (void)clearPreloadPlayer;
- (void)stageDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)cancelPreloadStream;
- (void)enqueuePlayerIfNeedWhenEnterRoom;
- (void)startPreloadStreamWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;

@end
