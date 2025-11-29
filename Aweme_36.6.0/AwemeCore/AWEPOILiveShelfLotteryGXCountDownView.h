@class UILabel, NSString;

@interface AWEPOILiveShelfLotteryGXCountDownView : UIView <AWELiveShelfGlobalTimerDelegate>

@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isFitFormatLength;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateServerTime:(double)a0;
- (void)gx_bindData:(id)a0;
- (void).cxx_destruct;
- (void)timerFired;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
