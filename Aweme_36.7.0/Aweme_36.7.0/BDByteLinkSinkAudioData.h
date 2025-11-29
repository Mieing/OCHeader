@class NSString, NSData;

@interface BDByteLinkSinkAudioData : NSObject

@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long pts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } ptsTime;

- (void).cxx_destruct;

@end
