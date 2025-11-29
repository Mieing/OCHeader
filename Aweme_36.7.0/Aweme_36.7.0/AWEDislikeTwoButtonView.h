@class UIButton;
@protocol AWEDislikeTwoButtonViewDelegate;

@interface AWEDislikeTwoButtonView : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (weak, nonatomic) id<AWEDislikeTwoButtonViewDelegate> delegate;

- (void)setTitle:(id)a0 index:(unsigned long long)a1;
- (double)guideButtonInterval;
- (void)leftButtonDidClicked:(id)a0;
- (void)rightButtonDidClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
