@class UILabel, UIButton, IESLiveEmptyView;

@interface IESLiveMultiAuidoStartPanel : HTSLivePopUpView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *startButton;
@property (retain, nonatomic) IESLiveEmptyView *defaultView;
@property (nonatomic) BOOL didClickStart;
@property (copy, nonatomic) id /* block */ closeCompletion;
@property (copy, nonatomic) id /* block */ startCompletion;

- (void)didSetAttachingDIContext;
- (void)hideWithDestroy:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;

@end
