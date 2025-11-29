@class NSString, UILabel;

@interface IESLiveGuidePaidLiveRecallView : UIView

@property (copy, nonatomic) NSString *recallText;
@property (copy, nonatomic) id /* block */ chooseAction;
@property (weak, nonatomic) UILabel *tipLabel;

- (id)initWithRecallText:(id)a0 chooseAction:(id /* block */)a1;
- (void)chooseButtonAction:(id)a0;
- (id)initWithChooseAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
