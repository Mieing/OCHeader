@class UILabel;

@interface AFDPinchZoomInTipsView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) unsigned long long status;

+ (id)enterTips;

- (id)initAndAddToContainer:(id)a0;
- (void)showTipsForStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
