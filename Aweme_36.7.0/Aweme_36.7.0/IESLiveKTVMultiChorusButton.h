@class UIButton;

@interface IESLiveKTVMultiChorusButton : UIView

@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) BOOL hasJoined;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) BOOL isControlBar;

- (void)clickActionButton;
- (void)updateWithJoinState:(BOOL)a0;
- (id)initWithCornerRadius:(double)a0 isControlBar:(BOOL)a1 clickAction:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
