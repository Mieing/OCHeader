@class MMTimer, NSString;

@interface WCAdTypewriterLabel : MMUILabel

@property (retain, nonatomic) MMTimer *typewriterTimer;
@property (retain, nonatomic) NSString *typewriterText;
@property (nonatomic) double animationInterval;

- (void)setTypewriterText:(id)a0 animationDuration:(double)a1;
- (void)typewriterPrint;
- (void)startTimer;
- (void)stopTimer;
- (void)dealloc;
- (void).cxx_destruct;

@end
