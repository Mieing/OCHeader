@class NSString;

@interface PCMAudioFile : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mDataFormat;
    struct OpaqueAudioFileID { } *mAudioFile;
    NSString *mFileName;
    unsigned int mCurrentPacket;
}

- (void)createAudioFile_WAVE:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setDataFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (BOOL)openByName:(id)a0;
- (BOOL)writeBytes:(void *)a0 len:(unsigned int)a1;
- (void).cxx_destruct;

@end
