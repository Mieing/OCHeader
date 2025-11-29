@class UIButton, UILabel, NSString;

@interface BDPVideoErrorView : UIView

@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *exitFullScreenBtn;
@property (nonatomic) BOOL showFullReturnBtn;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ exitFullScreenBlock;

- (void)retryButtonDidClick;
- (void)returnbtnAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
