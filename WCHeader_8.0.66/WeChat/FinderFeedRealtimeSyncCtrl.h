@class NSData;

@interface FinderFeedRealtimeSyncCtrl : WXPBGeneratedMessage

@property (nonatomic) BOOL needRealtimeSync;
@property (nonatomic) unsigned int firstRequestTimeMs;
@property (nonatomic) BOOL continueRequest;
@property (nonatomic) unsigned int nextSyncIntervalMs;
@property (retain, nonatomic) NSData *requestBuffer;

+ (void)initialize;

- (void)setRequestBuffer:(id)a0;
- (id)requestBuffer;
- (void)setNextSyncIntervalMs:(unsigned int)a0;
- (unsigned int)nextSyncIntervalMs;
- (void)setContinueRequest:(BOOL)a0;
- (BOOL)continueRequest;
- (void)setFirstRequestTimeMs:(unsigned int)a0;
- (unsigned int)firstRequestTimeMs;
- (void)setNeedRealtimeSync:(BOOL)a0;
- (BOOL)needRealtimeSync;

@end
