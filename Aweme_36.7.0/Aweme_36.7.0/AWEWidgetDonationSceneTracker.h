@class NSString;

@interface AWEWidgetDonationSceneTracker : NSObject <HTSAppLifeCycle>

@property (nonatomic) double becomeActiveTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;

@end
