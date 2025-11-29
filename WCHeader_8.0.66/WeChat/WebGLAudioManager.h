@class NSString;

@interface WebGLAudioManager : NSObject <TXAudioRawDataDelegate> {
    id /* block */ audioDataBlock;
    int audioSampleRate;
    int audioChannels;
}

@property (nonatomic) unsigned long long frameNum;
@property (nonatomic) unsigned long long timeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setBlock:(id /* block */)a0;
- (void)onPcmDataAvailable:(id)a0 pts:(unsigned long long)a1;
- (void)onAudioInfoChanged:(int)a0 channels:(int)a1;
- (void).cxx_destruct;

@end
