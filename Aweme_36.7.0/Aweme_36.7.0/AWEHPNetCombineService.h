@class NSString;

@interface AWEHPNetCombineService : HTSService <AWEHPNetCombineService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupNetCombineForColdLaunchDelay;
- (void)setupNetCombineForFeedReady;
- (void)addSubscriber:(id)a0;

@end
