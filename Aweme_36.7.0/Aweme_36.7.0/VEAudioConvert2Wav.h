@interface VEAudioConvert2Wav : NSObject

- (void)convertAudioAsync:(id)a0 outputURL:(id)a1 completeCallback:(id /* block */)a2;
- (BOOL)convertAudioSync:(id)a0 outputURL:(id)a1 completeCallback:(id /* block */)a2;
- (id)init;

@end
