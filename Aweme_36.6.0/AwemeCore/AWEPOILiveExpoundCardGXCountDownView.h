@class YYLabel, NSTimer, NSString;

@interface AWEPOILiveExpoundCardGXCountDownView : UIView <GXBindDataProtocal>

@property (retain, nonatomic) YYLabel *countDownLabel;
@property (weak, nonatomic) NSTimer *flashSaleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCountDown:(long long)a0;
- (void)gx_bindData:(id)a0;
- (id)timeStringFromSeconds:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
