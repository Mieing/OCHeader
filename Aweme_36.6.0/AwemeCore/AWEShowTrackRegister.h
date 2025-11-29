@interface AWEShowTrackRegister : NSObject

+ (void)registerAllShowTrackerWithParams:(id)a0 attachTo:(id)a1;
+ (void)registerAllShowTrackerWithParams:(id)a0 attachTo:(id)a1 async:(BOOL)a2;
+ (BOOL)enableAsyncToTransmissionNode;
+ (id)showTrackerAllEventArray;
+ (id)showTrackerCheckParams;
+ (void)transmissionNodeInfoForEvent:(id)a0 params:(id)a1 attachTo:(id)a2;
+ (id)showTrackerCheckPublicTrack;

@end
