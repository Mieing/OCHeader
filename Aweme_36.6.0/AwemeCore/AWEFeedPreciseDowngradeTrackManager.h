@interface AWEFeedPreciseDowngradeTrackManager : NSObject

+ (BOOL)enablePreciseDowngradeTrack;
+ (void)trackNetProtector431EventWithFrom:(id)a0 totalSize:(id)a1 urlString:(id)a2 paramsDic:(id)a3;
+ (void)trackNetProtectorEventWithFrom:(id)a0 errorCode:(id)a1 urlString:(id)a2 paramsDic:(id)a3;

@end
