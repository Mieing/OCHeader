@interface IESVSDistributionEntranceTrackManager : NSObject

+ (id)commonParams;
+ (id)episodeFromVSVideoCacheModel:(id)a0;
+ (void)trackVideoShow:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 actionType:(id)a3 extraParams:(id)a4;
+ (void)trackVideoWindowCardTrackType:(unsigned long long)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 actionType:(id)a3 extraParams:(id)a4;
+ (void)trackVideoShowEnterFromMerge:(id)a0 enterMethod:(id)a1 actionType:(id)a2 extraParams:(id)a3;
+ (void)trackVideoWindowCard:(id)a0 trackType:(unsigned long long)a1 enterFromMerge:(id)a2 enterMethod:(id)a3 actionType:(id)a4 extraParams:(id)a5;
+ (id)paramsFromRoom:(id)a0;
+ (id)windowCardEventWithType:(unsigned long long)a0;

@end
