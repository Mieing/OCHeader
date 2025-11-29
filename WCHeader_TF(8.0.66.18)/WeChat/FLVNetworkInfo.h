@class NSMutableDictionary;

@interface FLVNetworkInfo : NSObject <INetworkStatusMgrExt>

@property (nonatomic) long long lastNetworkQuality;
@property (nonatomic) BOOL isWeakNetFromMars;
@property (nonatomic) unsigned int lastRTTFromMars;
@property (retain, nonatomic) NSMutableDictionary *qosHistoryDict;
@property (retain, nonatomic) NSMutableDictionary *networkInfoDict;

- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (long long)calcNetworkQuality:(id)a0;
- (long long)updateQosData:(id)a0;
- (long long)getNetworkQuality;
- (long long)getNetworkQuality:(unsigned int)a0;
- (unsigned int)getFlvAvgSpeed:(unsigned int)a0;
- (unsigned int)getFlvAvgFps:(unsigned int)a0;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;
- (void).cxx_destruct;

@end
