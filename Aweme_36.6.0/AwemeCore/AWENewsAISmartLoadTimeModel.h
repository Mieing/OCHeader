@interface AWENewsAISmartLoadTimeModel : NSObject

@property (nonatomic) double routerTime;
@property (nonatomic) double requestBeginTime;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double renderBeginTime;
@property (nonatomic) double renderEndTime;
@property (nonatomic) long long requestTime;
@property (nonatomic) long long renderTime;
@property (nonatomic) long long clientRenderTime;
@property (nonatomic) double preloadHeightBeginTime;
@property (nonatomic) double preloadHeightEndTime;
@property (nonatomic) long long preloadHeightTime;
@property (nonatomic) long long preloadHeightCount;
@property (nonatomic) BOOL hasRecordRenderBeginTime;

+ (long long)currentTime;

- (void)updateRenderBeginTime;
- (void)updateRenderEndTime;
- (void)updateRenderTime;
- (void)updateClientRenderTime;
- (void)updateRequestBeginTime:(long long)a0;
- (void)updateRequestEndTime:(long long)a0;
- (void)updateRequestTime;
- (void)updatePreloadHeightBeginTime;
- (void)updatePreloadHeightEndTime;
- (void)updatePreloadHeightTime;
- (void)updateRouterTime;

@end
