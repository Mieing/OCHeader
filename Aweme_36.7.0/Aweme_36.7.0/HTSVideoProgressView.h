@class UIImageView, UIImage, UILabel, NSMutableArray;

@interface HTSVideoProgressView : AWEStudioProgressView

@property (retain, nonatomic) NSMutableArray *markedProgresses;
@property (retain, nonatomic) NSMutableArray *markedProgressViews;
@property (retain, nonatomic) UIImage *markImage;
@property (retain, nonatomic) UIImageView *standardDurationLocation;
@property (nonatomic) BOOL showStandardDurationLocation;
@property (nonatomic) double standardDuration;
@property (retain, nonatomic) UIImageView *blinkingView;
@property (weak, nonatomic) UILabel *standardDurationLabel;
@property (nonatomic) BOOL isLeftEnd;
@property (nonatomic) BOOL isRightEnd;
@property (nonatomic) double markWidth;

+ (id)imageFromColor:(id)a0;

- (void)acc_fadeShow:(BOOL)a0 duration:(double)a1;
- (void)setProgress:(float)a0 duration:(double)a1 animated:(BOOL)a2;
- (void)updateViewWithTimeSegments:(id)a0 totalTime:(double)a1;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(BOOL)a0 standardDuration:(double)a1 maxDuration:(double)a2;
- (void)blinkMarkAtCurrentProgress:(BOOL)a0;
- (void)blinkProgressBarOnce;
- (void)layoutSegments:(id)a0 toalTime:(double)a1;
- (void)loadStandardDurationIndicatorIfNeed;
- (void)addMarkedProgress:(id)a0;
- (id)newMarkAtProgress:(double)a0;
- (void).cxx_destruct;

@end
