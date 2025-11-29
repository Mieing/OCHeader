@class NSString;

@interface IESLiveAVAudioRecorderOutput : NSObject <IESLiveAudioRecorderOutput>

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
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
