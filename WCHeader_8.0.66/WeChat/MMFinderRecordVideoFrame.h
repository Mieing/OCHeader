@class NSData, MMFinderReplayKitVideoDecoder;

@interface MMFinderRecordVideoFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain) NSData *encodedData;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } dtsTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } ptsTime;
@property (nonatomic) unsigned int pts;
@property (nonatomic) unsigned int dts;
@property (retain, nonatomic) NSData *sps;
@property (retain, nonatomic) NSData *pps;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) long long bitDeth;
@property (nonatomic) long long videoFullRangeFlag;
@property (nonatomic) long long videoFrameId;
@property (retain, nonatomic) MMFinderReplayKitVideoDecoder *decoder;
@property (nonatomic) int frameType;

- (void).cxx_destruct;

@end
