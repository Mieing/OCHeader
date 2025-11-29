@interface BDCastProxyRemuxerRemuxStatus : NSObject

@property (nonatomic) unsigned long long videoPacketCount;
@property (nonatomic) unsigned long long audioPacketCount;
@property (nonatomic) unsigned long long readVideoPacketSize;
@property (nonatomic) unsigned long long readAudioPacketSize;
@property (nonatomic) unsigned long long writeVideoPacketSize;
@property (nonatomic) unsigned long long writeAudioPacketSize;
@property (nonatomic) unsigned long long discardedVideoPacketCount;
@property (nonatomic) unsigned long long discardedAudioPacketCount;
@property (nonatomic) unsigned long long discardedVideoPacketSize;
@property (nonatomic) unsigned long long discardedAudioPacketSize;
@property (nonatomic) BOOL isStreamEnd;

+ (id)statusFromRemuxerStatistics:(struct BDCastProxyRemuxerStatistics { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })a0;

@end
