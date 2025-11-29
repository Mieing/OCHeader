@class WCFinderAggregatedBulletViewParams, WCFinderBulletGeneralConfig, MMTimer, _TtC6WeChat20WFDEnhancedLabelView, UIView, WCFinderBulletItem;

@interface WCFinderAggregatedBulletView : UIView

@property (retain, nonatomic) WCFinderAggregatedBulletViewParams *params;
@property (retain, nonatomic) WCFinderBulletGeneralConfig *config;
@property (retain, nonatomic) _TtC6WeChat20WFDEnhancedLabelView *textLabel;
@property (retain, nonatomic) _TtC6WeChat20WFDEnhancedLabelView *countLabel;
@property (retain, nonatomic) UIView *plusOneView;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) long long currentCount;
@property (nonatomic) long long targetCount;
@property (nonatomic) double stepIncrement;
@property (readonly, nonatomic) WCFinderBulletItem *item;

+ (double)estimatedHeight;

- (void)dealloc;
- (id)initWithParams:(id)a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_handlePlusOneViewTap;
- (void)startCountAnimation;
- (void)_timerCallback:(id)a0;
- (void)_updateCountLabel;
- (void)_setupReport;
- (double)_reportPlayPercent;
- (void).cxx_destruct;

@end
