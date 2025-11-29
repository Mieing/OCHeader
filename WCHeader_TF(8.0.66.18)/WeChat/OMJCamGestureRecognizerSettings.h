@class NSArray;

@interface OMJCamGestureRecognizerSettings : NSObject

@property (readonly, nonatomic) BOOL isGestureEnabled;
@property (readonly, nonatomic) NSArray *enabledGestures;

- (id)initWithBackingSettings:(const void *)a0;
- (BOOL)isGestureEnabled:(long long)a0;
- (void).cxx_destruct;

@end
