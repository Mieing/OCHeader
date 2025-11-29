@class NSString, VoipForceStartObject;

@interface VoipForceStartInActiveState : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) VoipForceStartObject *m_audioObject;
@property (retain, nonatomic) VoipForceStartObject *m_videoObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setCanStartInUnactive:(BOOL)a0;
- (void)updateVoipAudioStartBlock:(id /* block */)a0;
- (BOOL)startAudio;
- (void)updateVoipVideoStartBlock:(id /* block */)a0;
- (void)startVideo;
- (void).cxx_destruct;

@end
