@class AWESearchCountDownItemView, AWESearchCountDownSemicolonLayer, NSString, NSTimer, AWEEcommerceGuideSearchV2CountDownModel, DUXBaseLabel;

@interface AWEEcomSearchCountDownView : UIView

@property (retain, nonatomic) DUXBaseLabel *prefixTextLabel;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2CountDownModel *model;
@property (retain, nonatomic) AWESearchCountDownItemView *hourItemView;
@property (retain, nonatomic) AWESearchCountDownSemicolonLayer *hourAndMinSepLayer;
@property (retain, nonatomic) AWESearchCountDownItemView *minuteItemView;
@property (retain, nonatomic) AWESearchCountDownSemicolonLayer *minAndSecSepLayer;
@property (retain, nonatomic) AWESearchCountDownItemView *secondItemView;
@property (retain, nonatomic) NSString *hour;
@property (retain, nonatomic) NSString *minutes;
@property (retain, nonatomic) NSString *second;
@property (retain, nonatomic) NSTimer *timer;

- (void)configUI;
- (void)beginTimer;
- (long long)getCountdownInterVal;
- (void)configWithGSCountDownModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTimer;
- (void)updateText;

@end
