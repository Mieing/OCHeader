@class UIButton, UILabel, UIView;

@interface IESLiveKTVWillSingListWatingConnectView : UIView

@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) id /* block */ clickCompletion;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)p_didClickButton;
- (void)changeTextContent:(id)a0;
- (void)isShowLineStyle:(BOOL)a0;
- (id)initWithWaitingPrompts:(id)a0;
- (void)p_setupUIWithWaitingPrompts:(id)a0;
- (void)p_setupUIWithWaitingOffset:(unsigned long long)a0;
- (id)initWithWaitingOffset:(unsigned long long)a0 clickCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
