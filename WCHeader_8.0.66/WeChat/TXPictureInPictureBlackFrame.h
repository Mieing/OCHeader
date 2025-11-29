@class TXSampleBufferWrapper;

@interface TXPictureInPictureBlackFrame : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) TXSampleBufferWrapper *sampleBufferWrapper;

- (void)setResolution:(long long)a0 height:(long long)a1;
- (void).cxx_destruct;

@end
