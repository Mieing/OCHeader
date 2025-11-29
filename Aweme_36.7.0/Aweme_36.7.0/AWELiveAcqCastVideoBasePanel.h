@class UIImageView, UILabel, UIView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoBasePanel : UIView

@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *expandableView;
@property (nonatomic) double originalHeight;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *endImageView;
@property (nonatomic) BOOL showBackIcon;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;

- (void)onClickClose;
- (void)onClickBack;
- (void)setupBaseUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
