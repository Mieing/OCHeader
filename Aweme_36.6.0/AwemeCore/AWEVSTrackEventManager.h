@class NSString;

@interface AWEVSTrackEventManager : NSObject <AWEVSTrackEventProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedVSTracker;

- (void)trackVideoShow:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 actionType:(id)a3 extraParams:(id)a4;
- (void)trackVideoWindowCardTrackType:(unsigned long long)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 actionType:(id)a3 extraParams:(id)a4;
- (void)trackVideoShowEnterFromMerge:(id)a0 enterMethod:(id)a1 actionType:(id)a2 extraParams:(id)a3;
- (void)trackVsAdEvent:(id)a0 Tag:(id)a1 refer:(id)a2 parmas:(id)a3;
- (void)trackVideoWindowCard:(id)a0 trackType:(unsigned long long)a1 enterFromMerge:(id)a2 enterMethod:(id)a3 actionType:(id)a4 extraParams:(id)a5;
- (int)vsEpisodeTypeStr:(id)a0;
- (int)vsEpisodeSubTypeStr:(id)a0;

@end
