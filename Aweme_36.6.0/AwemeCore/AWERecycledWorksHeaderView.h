@class AWERecycledWorksViewController, DUXBaseLabel, UIButton;
@protocol AWERecycledWorksHeaderViewDelegate;

@interface AWERecycledWorksHeaderView : UIView

@property (weak, nonatomic) AWERecycledWorksViewController *vc;
@property (retain, nonatomic) DUXBaseLabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeTipsButton;
@property (weak, nonatomic) id<AWERecycledWorksHeaderViewDelegate> delegate;

- (id)initWithVC:(id)a0;
- (void)closeTipsButtonAction:(id)a0;
- (id)tipContent;
- (void).cxx_destruct;
- (void)setupUI;

@end
