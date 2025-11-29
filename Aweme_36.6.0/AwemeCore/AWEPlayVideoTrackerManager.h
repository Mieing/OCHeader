@class NSMutableArray, AWEPlayVideoDefaultTracker;

@interface AWEPlayVideoTrackerManager : NSObject

@property (retain, nonatomic) NSMutableArray *trackerIMPs;
@property (retain, nonatomic) AWEPlayVideoDefaultTracker *defaultTracker;

+ (id)sharedInstance;

- (void)setupTrackIMPs;
- (unsigned long long)trackPlatformForType:(long long)a0;
- (id)track:(long long)a0 inPlayer:(id)a1 extraParams:(id)a2 passthroughParams:(id)a3;
- (id)trackVideoPlayFinishInPlayer:(id)a0 extraParams:(id)a1 passthroughParams:(id)a2 customTrackKey:(id)a3;
- (id)track:(long long)a0 inPlayer:(id)a1 extraParams:(id)a2 passthroughParams:(id)a3 customTrackKey:(id)a4;
- (void)reportDuplicate:(long long)a0 forKey:(id)a1 tracker:(id)a2 defaultParams:(id)a3 trackerParams:(id)a4 currentParams:(id)a5 trackParamDict:(id)a6;
- (id)mapTrackParams:(id)a0 withType:(long long)a1 inPlayer:(id)a2;
- (id)trackVideoPlayInPlayer:(id)a0 extraParams:(id)a1 passthroughParams:(id)a2;
- (id)trackVideoPlayTimeInPlayer:(id)a0 extraParams:(id)a1 passthroughParams:(id)a2;
- (id)trackVideoPlayFinishInPlayer:(id)a0 extraParams:(id)a1 passthroughParams:(id)a2;
- (id)trackForVideoPlayPauseInPlayer:(id)a0 extraParams:(id)a1 passthroughParams:(id)a2;
- (id)trackVideoPlayForSubClassInPlayer:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
