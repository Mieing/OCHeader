@class UIImageView, UILabel, UIView;
@protocol IESECLiveListRunTopViewDelegate;

@interface IESECLiveListRunTopView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *topArrowImageView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) BOOL isGuideAnimating;
@property (weak, nonatomic) id<IESECLiveListRunTopViewDelegate> delegate;

- (void)showGuideView;
- (void)addBizAction;
- (void)clickContainerAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
