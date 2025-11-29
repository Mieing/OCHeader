@class UILabel, UIView;

@interface IESLiveVoiceToastView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *label;

+ (void)showToast:(id)a0 duration:(double)a1 modal:(BOOL)a2;
+ (void)showToast:(id)a0;
+ (void)hide;

- (void)showToast:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
