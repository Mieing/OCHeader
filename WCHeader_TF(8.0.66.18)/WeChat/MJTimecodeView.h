@class UIFont, UIStackView, UIColor, UILabel, NSMutableAttributedString;

@interface MJTimecodeView : MMUIView {
    unsigned long long _fontConfiguration;
    UILabel *_currentTimeLabel;
    UILabel *_durationLabel;
    UILabel *_separatorLabel;
    UIStackView *_labelContainer;
    UIFont *_normalFont;
    UIFont *_subscriptFont;
    UIColor *_currentTimeColor;
    UIColor *_durationColor;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentDuration;
    BOOL _shouldShowHourDigit;
    NSMutableAttributedString *_currentTimeAttributedString;
    NSMutableAttributedString *_durationAttributedString;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) unsigned long long displayMode;

+ (id)timecodeFontOfSize:(double)a0 weight:(double)a1;

- (id)initWithFontConfiguration:(unsigned long long)a0;
- (id)initWithFontConfiguration:(unsigned long long)a0 currentTimeColor:(id)a1 durationColor:(id)a2;
- (void)commonInit;
- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateTimeLabel;
- (void)updateDurationLabel;
- (void).cxx_destruct;

@end
