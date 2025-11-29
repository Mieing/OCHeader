@class NSString;

@interface AWEPayLifeCycleRecorder : NSObject <HTSAppLifeCycle>

@property (nonatomic) double lastAppWillEnterForegroundTimestamp;
@property (nonatomic) double lastAppDidBecomeActiveTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;

@end
