@class UIView;

@interface IESLiveAnchorGameFuncPaneTableFooterView : UIView

@property (copy, nonatomic) id /* block */ retryBlock;
@property (weak, nonatomic) UIView *squareView;

- (void)setupUIV2WithType:(long long)a0;
- (void)clickRetryButton;
- (void)setupUIWithType:(long long)a0 sceneType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
