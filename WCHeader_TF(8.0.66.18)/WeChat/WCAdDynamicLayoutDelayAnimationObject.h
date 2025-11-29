@class NSArray, UIView;

@interface WCAdDynamicLayoutDelayAnimationObject : NSObject

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long animationOptions;
@property (retain, nonatomic) NSArray *properties;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL repeat;
@property (nonatomic) double repeatInterval;
@property (nonatomic) long long repeatCount;
@property (nonatomic) long long repeatedCount;

- (void).cxx_destruct;

@end
