@class HTSLiveEpisode, HTSEventContext, IESLivePlaybackComponentContext, NSString, IESLivePlaybackComponentLoader;

@interface IESLivePlaybackComponent : NSObject <IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLivePlaybackComponentLoader *componentLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdatePlaybackEpisode:(id)a0;
- (void).cxx_destruct;

@end
