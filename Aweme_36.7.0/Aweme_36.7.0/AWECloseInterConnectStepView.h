@class UIImageView, UILabel, UIView;

@interface AWECloseInterConnectStepView : UIView

@property (nonatomic) unsigned long long step;
@property (retain, nonatomic) UIImageView *imageView1;
@property (retain, nonatomic) UIImageView *imageView2;
@property (retain, nonatomic) UIImageView *imageView3;
@property (retain, nonatomic) UIView *lineView1;
@property (retain, nonatomic) UIView *lineView2;
@property (retain, nonatomic) UILabel *label1;
@property (retain, nonatomic) UILabel *label2;
@property (retain, nonatomic) UILabel *label3;
@property (nonatomic) BOOL isLowEndMachine;

- (void)configUI;
- (void)drawDotLint;
- (void)drawLineByImageView:(id)a0 color:(id)a1;
- (void)setLabelStyle:(id)a0 forIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithStep:(unsigned long long)a0;

@end
