@class NSString, UIImageView, UILabel, MMTimerLabel;

@interface MultitalkMinimizeView : UIImageView

@property (retain, nonatomic) UIImageView *m_iconImageView;
@property (retain, nonatomic) UILabel *m_descriptionLabel;
@property (retain, nonatomic) MMTimerLabel *m_timerLabel;
@property (nonatomic) unsigned long long frameMode;
@property (nonatomic) unsigned long long descMode;
@property (nonatomic) BOOL isSupportIgnore;
@property (retain, nonatomic) NSString *extendAccessibilityString;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initIconView;
- (void)initDescView;
- (void)initTimerView;
- (void)changeFrameMode:(unsigned long long)a0;
- (void)updateSubviews;
- (void)updateSubviewsByFrameMode;
- (void)updateSubviewsByDescMode;
- (void)startTimer;
- (void)updateTimerForIlinkToMultiTalk:(double)a0;
- (void)clearDesc;
- (void)updateDescMode:(unsigned long long)a0 withDisplayTime:(double)a1;
- (id)timerLabelTextColor;
- (id)normalDescTextColor;
- (id)endingDescTextColor;
- (void).cxx_destruct;

@end
