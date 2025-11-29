@class BDPStreamingAudioRecorder_HG;

@interface BDPPluginRecorder_HG : BDPBridgeInstancePlugin {
    BDPStreamingAudioRecorder_HG *_streamingRecorder;
}

- (void)operateRecorderWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
