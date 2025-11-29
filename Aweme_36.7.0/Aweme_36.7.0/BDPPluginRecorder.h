@class BDPStreamAudioRecorder, NSRecursiveLock;

@interface BDPPluginRecorder : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPStreamAudioRecorder *recorder;
@property (retain, nonatomic) NSRecursiveLock *locker;

+ (unsigned long long)pluginMode;

- (void)operateRecorderWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
