@class NSString;

@interface AWETrackerBundleLoaderListener : NSObject <BCAABundleListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;

- (void)bundleDidLoaded:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;

@end
