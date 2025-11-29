@class NSURL, IESAudioConverter, IESMMAudioOnsetResult;

@interface IESMMAudioOnset : NSObject {
    void *_ODptr;
}

@property (retain, nonatomic) IESAudioConverter *musicConverter;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } absd;
@property (retain, nonatomic) NSURL *musicURL;
@property (nonatomic) float start;
@property (nonatomic) float duration;
@property (retain, nonatomic) IESMMAudioOnsetResult *result;

- (void *)convertNewFile:(id)a0;
- (id)initWithFileURL:(id)a0 start:(float)a1 duration:(float)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getResult;

@end
