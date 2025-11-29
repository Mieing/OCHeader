@class UIImageView, UILabel, UIView;

@interface IESLiveCloudCollaborateWaitingView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UIImageView *coffeeView;
@property (retain, nonatomic) UILabel *firstTip;
@property (retain, nonatomic) UILabel *secondTip;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
