@class UIColor;

@interface AFDButtonControlStateOptions : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double titleAlpha;
@property (nonatomic) double alpha;
@property (nonatomic) double animationDuration;
@property (nonatomic) double animationDelay;
@property (nonatomic) long long animationCurve;
@property (retain, nonatomic) AFDButtonControlStateOptions *fallbackOptions;

- (void).cxx_destruct;
- (id)init;

@end
