@interface DUXAlertDialogCountDownAction : DUXAlertDialogAction

@property (nonatomic) long long countTime;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ countDownAction;

+ (id)actionWithStyle:(unsigned long long)a0 title:(id)a1 click:(id /* block */)a2;
+ (id)actionWithType:(long long)a0 style:(unsigned long long)a1 title:(id)a2 click:(id /* block */)a3 countTime:(long long)a4 countDownAction:(id /* block */)a5;
+ (id)actionWithType:(long long)a0 style:(unsigned long long)a1 title:(id)a2 click:(id /* block */)a3 countTime:(long long)a4 disableAutoDismiss:(BOOL)a5 countDownAction:(id /* block */)a6;
+ (id)actionWithType:(long long)a0 title:(id)a1 click:(id /* block */)a2 countTime:(long long)a3 countDownAction:(id /* block */)a4;

- (void).cxx_destruct;

@end
