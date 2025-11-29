@class NSMutableArray, UILabel, UIView, UIButton;

@interface AWEIMThirdPartShareSuccessView : UIView

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *successBtn;
@property (retain, nonatomic) UILabel *successLabel;
@property (retain, nonatomic) NSMutableArray *buttonArray;

- (void)showOnView:(id)a0;
- (void)actionButtonClicked:(id)a0;
- (id)initWithActionButtonArray:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)layoutSubviews;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)a0;

@end
