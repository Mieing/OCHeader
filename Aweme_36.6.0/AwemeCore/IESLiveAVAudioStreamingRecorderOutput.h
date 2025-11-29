@class NSString;

@interface IESLiveAVAudioStreamingRecorderOutput : NSObject <IESLiveAQAudioRecorderOutput> {
    struct OpaqueAudioFileID { } *_audioFile;
    long long _audioPacket;
}

@property (nonatomic) BOOL convertSettingReady;
@property (nonatomic) BOOL convertSettingDidSet;
@property (nonatomic) BOOL readySaveAudioToFile;
@property (nonatomic) BOOL saveAudioToFile;
@property (nonatomic) long long audioType;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioFormat;
@property (copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openAudioFile;
- (void)closeAudioFile;
- (void)clearAudioFile;
- (void)didReceiveAudio:(struct IESLiveAudioQueueInputData { void *x0; struct OpaqueAudioQueue *x1; struct AudioQueueBuffer *x2; struct AudioTimeStamp *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; })a0;
- (void)copyEncoderCookieToFile:(struct OpaqueAudioQueue { } *)a0 error:(id *)a1;
- (BOOL)convertBasicSetting;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
