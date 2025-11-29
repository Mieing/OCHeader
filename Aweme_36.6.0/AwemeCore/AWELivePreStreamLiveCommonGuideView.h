@class CAGradientLayer, NSArray, AWELivePreStreamCommonFooterViewConfig, AWELivePreStreamLiveDistributeFooterView;

@interface AWELivePreStreamLiveCommonGuideView : UIView

@property (retain, nonatomic) AWELivePreStreamCommonFooterViewConfig *config;
@property (retain, nonatomic) NSArray *avatarList;
@property (retain, nonatomic) AWELivePreStreamLiveDistributeFooterView *tipView;
@property (retain, nonatomic) CAGradientLayer *gradient;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)actionButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)layoutGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void)stopTimerCountDown;
- (void)showTimerCountDownLabel;
- (void)backgroundTapGestureClicked;
- (void)actionImageClicked:(id)a0;
- (void)maskClick;
- (void).cxx_destruct;
- (void)didLongPress;
- (void)setupUI;

@end
