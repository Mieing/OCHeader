@class UIButton, UIView;

@interface AWESearchTextExtractionHeaderView : UIView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void).cxx_destruct;
- (void)closeAction;
- (id)init;
- (void)setupUI;

@end
