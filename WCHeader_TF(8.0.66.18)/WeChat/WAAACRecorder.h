@class NSMutableData, NSString;

@interface WAAACRecorder : WABaseRecorder <WARecordEncodeDelegate>

@property (nonatomic) struct OpaqueAudioConverter { } *encodeCoverter;
@property (nonatomic) struct OpaqueAudioFileID { } *outputFileID;
@property (nonatomic) unsigned int recordPacket;
@property (nonatomic) unsigned int pcmBufferPacket;
@property (retain, nonatomic) NSMutableData *pcmDataBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareToRecord;
- (void)clearRecorderState;
- (void)encodePCMBufferToOutputFormat:(struct WARecorderData { id x0; id x1; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x2; struct OpaqueAudioQueue *x3; struct AudioQueueBuffer *x4[3]; id x5; } *)a0 audioQueueRef:(struct OpaqueAudioQueue { } *)a1 audioQueueBufferRef:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a2 audioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a3 numPackets:(unsigned int)a4 packetDescription:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a5;
- (BOOL)configureAACConverter:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (BOOL)copyEncoderCookieToFile;
- (BOOL)checkErrorAndLogIfError:(int)a0 withErrorString:(id)a1;
- (BOOL)checkErrorAndStopIfError:(int)a0 withErrorString:(id)a1;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
