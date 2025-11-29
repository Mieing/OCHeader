@class UIView;

@interface AWEECOMIMInputSpeechTextLoadingView : UIView

@property (retain, nonatomic) UIView *viewFirst;
@property (retain, nonatomic) UIView *viewSecond;
@property (retain, nonatomic) UIView *viewThird;
@property (nonatomic) long long updateCount;
@property (nonatomic) double updateTime;

- (void)updateLoadingView;
- (id)bkgAlphaArr1;
- (id)bkgAlphaArr2;
- (id)bkgAlphaArr3;
- (void)resetLoadingView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
