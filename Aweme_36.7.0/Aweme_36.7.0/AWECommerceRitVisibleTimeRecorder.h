@interface AWECommerceRitVisibleTimeRecorder : NSObject

@property (nonatomic) double lastShowTime;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL visible;

- (void)recordVisible;
- (void)recordInvisible;
- (double)calculateVisibleTime;
- (void)reset;

@end
