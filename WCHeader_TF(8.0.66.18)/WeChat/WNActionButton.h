@class UIButton;
@protocol WNActionButtonDelegate;

@interface WNActionButton : UIView

@property (nonatomic) long long dataSourceType;
@property (weak, nonatomic) id<WNActionButtonDelegate> delegate;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL isShowBorder;

- (id)initButtonWithInfo:(id)a0;
- (id)generateStandButtonWithTitle:(id)a0 andImage:(id)a1 andFont:(id)a2 andWidth:(double)a3 andType:(long long)a4;
- (id)generateSystemButtonWithTitle:(id)a0 andImage:(id)a1 andType:(long long)a2;
- (void)onLabelClick:(id)a0;
- (void).cxx_destruct;

@end
