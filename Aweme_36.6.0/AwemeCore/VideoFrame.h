@class XPlayFrame;

@interface VideoFrame : NSObject

@property (retain, nonatomic) XPlayFrame *frame;
@property (nonatomic) double receiveTime;

- (void).cxx_destruct;

@end
