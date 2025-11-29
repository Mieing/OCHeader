@class HTSLiveEpisode, NSString, NSHashTable, IESLivePlaybackPaidStreamParameterCreator;
@protocol IESVSVideoPlayerRouter;

@interface IESLivePlaybackPaidStreamCreator : NSObject <IESLivePlaybackPaidStreamCreatorProtocol>

@property (retain, nonatomic) NSHashTable *externalPlugins;
@property (readonly, weak, nonatomic) HTSLiveEpisode *episode;
@property (readonly, weak, nonatomic) IESLivePlaybackPaidStreamParameterCreator *parameterCreator;
@property (retain, nonatomic) id<IESVSVideoPlayerRouter> videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)creatorShouldActive:(id)a0;

- (id)extraTrackParams;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (id)dataInjSceneID;
- (id)dataInjBusinessID;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (id)basicPlugins;
- (id)initWithEpisode:(id)a0 parameterCreator:(id)a1 externalPlugins:(id)a2;
- (void).cxx_destruct;
- (id)allPlugins;

@end
