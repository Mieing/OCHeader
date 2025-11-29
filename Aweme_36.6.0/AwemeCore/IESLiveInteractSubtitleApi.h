@class IESLiveInteractSubtitleConfig;

@interface IESLiveInteractSubtitleApi : HTSLiveApi

@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;

- (void)updateConfig:(id)a0;
- (void)get:(id)a0 params:(id)a1 modelClass:(Class)a2 callback:(id /* block */)a3;
- (void)updateSubtitleType:(id)a0 type:(long long)a1 callback:(id /* block */)a2;
- (void)subtitleStopCheckWithRoomId:(id)a0 callback:(id /* block */)a1;
- (void)subtitleStartCheckWithRoomId:(id)a0 callback:(id /* block */)a1;
- (void)updateSubtitleSetting:(id)a0 toState:(BOOL)a1 callback:(id /* block */)a2;
- (void)updateSubtitleStyle:(id)a0 style:(long long)a1 callback:(id /* block */)a2;
- (void)updateSubtitleCoordinate:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
