@class DUXPopover;

@interface AWESearchAIGCDeepThinkNetModePopover : UIView

@property (retain, nonatomic) DUXPopover *popover;
@property (copy, nonatomic) id /* block */ cancelCallback;

+ (id)showWithNetModeList:(id)a0 currentType:(long long)a1 target:(id)a2 selectCallback:(id /* block */)a3 cancelCallback:(id /* block */)a4 styleConfig:(id)a5;

- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
