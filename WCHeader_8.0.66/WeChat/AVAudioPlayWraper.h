@class NSString, AVAudioPlayer;

@interface AVAudioPlayWraper : MMUserService <MMServiceProtocol, AVAudioPlayerDelegate> {
    AVAudioPlayer *audioPlayer;
    id /* block */ _currentCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)playWithPath:(id)a0;
- (void)playWithPath:(id)a0 volume:(float)a1;
- (void)playWithPath:(id)a0 volume:(float)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
