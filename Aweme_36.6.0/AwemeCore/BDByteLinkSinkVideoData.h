@class NSString, NSData;

@interface BDByteLinkSinkVideoData : NSObject

@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) int rotation;
@property (nonatomic) unsigned long long pts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } ptsTime;
@property (nonatomic) BOOL firstFrame;
@property (nonatomic) unsigned long long videoFormat;
@property (nonatomic) struct __CVBuffer { } *outputPixelBuffer;
@property (copy, nonatomic) id /* block */ didDecoded;
@property (copy, nonatomic) id /* block */ didRendered;

- (void).cxx_destruct;
- (id)init;

@end
