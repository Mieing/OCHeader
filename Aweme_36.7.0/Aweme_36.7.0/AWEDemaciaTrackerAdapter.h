@class NSString;

@interface AWEDemaciaTrackerAdapter : NSObject <AWEDemaciaTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEventName:(id)a0 params:(id)a1;

@end
