@class NSError, TXCVideoFrame;

@interface TXCVideoFrameResult : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) TXCVideoFrame *videoFrame;

- (id)initWithVideoFrame:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
