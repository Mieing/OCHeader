@class NSString;

@interface AWEAwesomeSplashTracker : NSObject <AWEAwesomeSplashTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackSplashFailWithType:(long long)a0 model:(id)a1;
+ (void)trackFirstView:(id)a0;
+ (void)trackBidSplashFailWithReason:(unsigned long long)a0 model:(id)a1;
+ (id)splashAdSequence;
+ (void)trackSplashFailWithType:(long long)a0 model:(id)a1 ttSplashModel:(id)a2;


@end
