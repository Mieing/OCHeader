@class UILabel, UIView;

@interface AWEOpenPlatformRiskDialogBodyView : UIView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *leftlabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) double dialogInnerWidth;

- (id)initWithDialogInnerWidth:(double)a0;
- (void)setupAddress:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
