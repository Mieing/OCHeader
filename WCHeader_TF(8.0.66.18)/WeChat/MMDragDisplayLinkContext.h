@class CAMediaTimingFunction;

@interface MMDragDisplayLinkContext : NSObject

@property (nonatomic) double beginTopValue;
@property (nonatomic) double beginProgressValue;
@property (nonatomic) double beginAlpha;
@property (nonatomic) double endTopValue;
@property (nonatomic) double endProgressValue;
@property (nonatomic) double endAlpha;
@property (nonatomic) double totalDuration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (double)changingTopValue:(double)a0;
- (double)changingProgressValue:(double)a0;
- (double)changingAlphaValue:(double)a0;
- (void).cxx_destruct;

@end
