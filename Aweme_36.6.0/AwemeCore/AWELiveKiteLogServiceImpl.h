@class NSString;

@interface AWELiveKiteLogServiceImpl : NSObject <IESLiveKiteLogTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 content:(id)a1;

@end
