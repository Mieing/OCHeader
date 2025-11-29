@class UILabel, UIView;

@interface IESLiveMultiKTVSingModeCardView : UIView

@property (nonatomic) long long identifier;
@property (copy, nonatomic) id /* block */ selection;
@property (copy, nonatomic) id /* block */ operation;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *operationAreaView;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIView *mainSelectionMaskView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;

- (void)p_operate;
- (id)initWithTitle:(id)a0 identifier:(long long)a1 contentViewBuilder:(id /* block */)a2 operationBtnIcon:(id)a3 operationBtnTitle:(id)a4 selection:(id /* block */)a5 operation:(id /* block */)a6;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
