@class UIButton;
@protocol IESIMRichButtonProtocol;

@interface AWEIMStrangerQuickSettingBottomView : UIView

@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *settingButton;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *clearButton;
@property (copy, nonatomic) id /* block */ clickSettingButtonBlock;
@property (copy, nonatomic) id /* block */ clickClearButtonBlock;

- (void)didClickSettingButton:(id)a0;
- (void)didClickClearButton:(id)a0;
- (void)clearStatusIsRuning:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)layoutUI;

@end
