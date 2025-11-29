@class NSDictionary, NSMutableArray;

@interface TVLAbnormalStreamChecker : TVLChecker

@property (copy, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) long long SEIContinuanceCheckDurationInMillseconds;
@property (readonly, nonatomic) long long SEIAvailableCheckDurationInMillseconds;
@property (readonly, nonatomic) long long renderingInfoCacheDurationInMillseconds;
@property (retain, nonatomic) NSMutableArray *transInfoQueue;
@property (retain, nonatomic) NSMutableArray *receivedVideoPacketQueue;
@property (readonly, nonatomic) long long GOPDurationInMillseconds;

+ (id)checkerWithConfiguration:(id)a0;

- (void)appendTransInfo:(id)a0;
- (void)checkReceivedPacketsWithRenderingInfo:(id)a0;
- (void)removeTransInfoBeforePTS:(long long)a0 include:(BOOL)a1;
- (void)hasDetectedStreamAbnormalWithEventInfo:(id)a0;
- (void)removeReceivedPacketBeforePTS:(long long)a0 include:(BOOL)a1;
- (void)appendReliableSEI:(id)a0;
- (void)appendRenderingInfo:(id)a0;
- (void)appendReceivedPacket:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
