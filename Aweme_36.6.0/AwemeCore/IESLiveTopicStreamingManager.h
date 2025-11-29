@class NSString, IESLiveInteractiveSEIParser;
@protocol IESLivePlayerProtocol;

@interface IESLiveTopicStreamingManager : NSObject <IESLivePlayerControllerDelegate, AWELiveTopicStreamingManagerProtocol>

@property (retain, nonatomic) IESLiveInteractiveSEIParser *seiParser;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)a0 model:(id)a1;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)resumeStreaming;
- (void)configCell:(id)a0 room:(id)a1 palyer:(id)a2;
- (BOOL)isDrawAndGuess:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopStreaming;

@end
