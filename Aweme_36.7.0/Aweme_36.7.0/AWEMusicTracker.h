@class NSString;

@interface AWEMusicTracker : HTSService <AWEMusicStreamingTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackEvent:(id)a0 params:(id)a1 to:(unsigned long long)a2;
+ (void)trackSlardarEvent:(id)a0 params:(id)a1 moduleName:(id)a2 logType:(unsigned long long)a3;


@end
