@class NSString, NSMutableArray;

@interface MMFinderLiveNetworkFactorItem : MMObject

@property (nonatomic) long long factor;
@property (nonatomic) unsigned long long lastUpdateTimeMs;
@property (nonatomic) unsigned int uiFlags;
@property (retain, nonatomic) NSString *lastNetworkType;
@property (nonatomic) BOOL isCellularValid;
@property (nonatomic) unsigned int uiNetworkStatusType;
@property (nonatomic) BOOL isWeakNetFromMars;
@property (nonatomic) unsigned int lastRTTFromMars;
@property (nonatomic) unsigned int lastAvgMarsSpeed;
@property (retain, nonatomic) NSMutableArray *recentDisconnectInLiveRoomTs;
@property (retain, nonatomic) NSMutableArray *recentLagInLiveRoomTs;
@property (retain, nonatomic) NSMutableArray *recentDisconnectInPreviewTs;
@property (retain, nonatomic) NSMutableArray *recentLagInPreviewTs;
@property (retain, nonatomic) NSMutableArray *livePlayerNetStatusForNetworkQuality;
@property (retain, nonatomic) NSMutableArray *livePlayerInPreviewNetStatusForNetworkQuality;
@property (retain, nonatomic) NSMutableArray *liveTRTCNetStatusForNetworkQuality;
@property (retain, nonatomic) NSMutableArray *recentLiveTRTCConnectLostTs;
@property (retain, nonatomic) NSMutableArray *recentLiveCGINetworkFails;
@property (retain, nonatomic) NSMutableArray *recentLiveCGIsDelay;
@property (nonatomic) long long localNetQuality;

- (id)initWithFactor:(long long)a0;
- (void).cxx_destruct;

@end
