@class NSData;

@interface FinderLiveDiscoverPreloadInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isPreloadRequest;
@property (retain, nonatomic) NSData *requestPreloadBuff;
@property (nonatomic) unsigned int totalPreloadCnt;
@property (nonatomic) unsigned int totalFailPreloadCnt;
@property (nonatomic) unsigned int totalEffectivePreloadCnt;
@property (nonatomic) float clientPredictScore;

+ (void)initialize;

@end
