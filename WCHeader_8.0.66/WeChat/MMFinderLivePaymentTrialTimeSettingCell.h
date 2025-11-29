@class UIImageView, MMUILabel;

@interface MMFinderLivePaymentTrialTimeSettingCell : MMUIView

@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int curTrialTimeHour;
@property (nonatomic) unsigned int curTrialTimeMinute;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 purchaseLivePreviewType:(long long)a1 curTrialTimeHour:(unsigned int)a2 curTrialTimeMinute:(unsigned int)a3;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateTrialTimeHour:(unsigned int)a0 trialTimeMinute:(unsigned int)a1;
- (id)getFormatTrialTimeString;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
