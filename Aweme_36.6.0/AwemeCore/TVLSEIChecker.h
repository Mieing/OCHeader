@class NSMutableString, NSMutableArray, TVLSEI;

@interface TVLSEIChecker : TVLChecker

@property (retain, nonatomic) NSMutableArray *keyframeContainerPacketQueue;
@property (retain, nonatomic) NSMutableArray *reliableSEIQueue;
@property (retain, nonatomic) NSMutableArray *sequentialSEIIndexQueue;
@property (retain, nonatomic) TVLSEI *firstReliableSEI;
@property (retain, nonatomic) TVLSEI *lastIndexedSEI;
@property (readonly, nonatomic) long long lastIndex;
@property (readonly, nonatomic) long long maxSEIIndex;
@property (readonly, nonatomic) long long minSEIIndex;
@property (retain, nonatomic) NSMutableString *abnormalSEIDiff;
@property (readonly, nonatomic) BOOL isSEIAvailable;
@property (readonly, nonatomic) unsigned long long receivedIndexedSEICount;
@property (readonly, nonatomic) unsigned long long expectedIndexedSEICount;
@property (readonly, nonatomic) unsigned long long receivedUniqueIndexedSEICount;
@property (readonly, nonatomic) unsigned long long expectedUniqueIndexedSEICount;

+ (id)checkerWithConfiguration:(id)a0;

- (void)hasDetectedStreamAbnormalWithEventInfo:(id)a0;
- (void)checkSEIWithRenderingInfo:(id)a0;
- (void)removeReceivedPacketBeforePTS:(long long)a0 include:(BOOL)a1;
- (void)removeSEIBeforePTS:(long long)a0 include:(BOOL)a1;
- (void)appendReliableSEI:(id)a0;
- (void)checkForArrivalRate:(id)a0 enableCheckSEIV2:(BOOL)a1;
- (void)appendRenderingInfo:(id)a0;
- (void)appendReceivedPacket:(id)a0;
- (void)resetSEIIndexParams;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
