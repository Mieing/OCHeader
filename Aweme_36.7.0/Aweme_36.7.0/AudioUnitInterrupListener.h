@interface AudioUnitInterrupListener : NSObject {
    void *mAudioUnitBackend;
}

+ (id)sharedInstance;

- (void)startListen:(void *)a0;
- (void)audioSessionInterrupted:(id)a0;
- (void)stopListen;

@end
