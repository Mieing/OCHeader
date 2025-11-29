@class NSString;

@interface IESIMThrottleDebounceFactory : NSObject <IESIMThrottleDebounceFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)generateTrailingDebounceWithInterval:(double)a0 queue:(id)a1;
- (id)p_commonExt;
- (id)generateHeadingThrottleWithInterval:(double)a0 queue:(id)a1;
- (id)generateTrailingThrottleWithInterval:(double)a0 queue:(id)a1;
- (id)generateHeadingDebounceWithInterval:(double)a0 queue:(id)a1;
- (id)generateTrailingDebounceThrottleWithInterval:(double)a0 maxThresholdInterval:(double)a1 queue:(id)a2;

@end
