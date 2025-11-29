@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceRecorder : MMObject {
    NSObject<OS_dispatch_queue> *_mediaQueue;
}

@property (retain, nonatomic) NSMutableDictionary *pendingSnapshotTasks;
@property (retain, nonatomic) NSMutableDictionary *recordingTasks;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) int frameDuration;
@property (retain, nonatomic) NSString *appid;

- (id)init;
- (void)takeSnapshotWithMember:(id)a0 complete:(id /* block */)a1;
- (void)startRecordWithMember:(id)a0 complete:(id /* block */)a1;
- (void)stopRecordWithMember:(id)a0 complete:(id /* block */)a1;
- (id)mvFileToWAFileStorage:(id)a0;
- (void)onVideoFrame:(const char *)a0 from:(id)a1 width:(int)a2 height:(int)a3 rotation:(int)a4;
- (struct __CVBuffer { } *)copyDataFromBuffer:(const char *)a0 toYUVPixelBufferWithWidth:(unsigned long long)a1 Height:(unsigned long long)a2;
- (void)onAudioData:(id)a0 timestamp:(double)a1;
- (void)setAudioParam:(id)a0;
- (void)appid:(id)a0;
- (void)reset;
- (void).cxx_destruct;

@end
