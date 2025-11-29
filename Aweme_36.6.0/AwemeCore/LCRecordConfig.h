@class NSURL;

@interface LCRecordConfig : NSObject

@property (retain, nonatomic) NSURL *outputUrl;
@property (nonatomic) unsigned int pixelformat;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) long long bitrate;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;

- (id)defaultOutputURL;
- (void).cxx_destruct;
- (id)init;

@end
