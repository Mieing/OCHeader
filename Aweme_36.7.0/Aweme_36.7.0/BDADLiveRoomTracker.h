@interface BDADLiveRoomTracker : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackAdEvent:(id)a0 tag:(id)a1 extra:(id)a2 adExtra:(id)a3;
+ (void)trackURLs:(id)a0 params:(id)a1;

@end
