@class CAGradientLayer, NSString, NSTimer, UIScrollView, UILabel;

@interface IESLiveCircleRollLabel : UILabel <UIScrollViewDelegate>

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *label1;
@property (retain, nonatomic) UILabel *label2;
@property (nonatomic) struct CGSize { double width; double height; } scrollViewContentSize;
@property (nonatomic) double x;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) double speed;
@property (nonatomic) double secondLabelInterval;
@property (nonatomic) long long circleTimes;
@property (nonatomic) double delayStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)destroyTimer;
- (id)comnInitLabel:(id)a0;
- (void)fistTimer;
- (void)refreshMarqueeLabelFrame;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;

@end
