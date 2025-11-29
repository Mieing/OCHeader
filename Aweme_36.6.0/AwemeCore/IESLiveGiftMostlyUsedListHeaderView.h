@class IESLiveGiftMostlyUsedListHeaderViewModel, UIImageView, IESLiveGiftMostlyUsedSwitchView, UILabel, UIView, RACCompoundDisposable;

@interface IESLiveGiftMostlyUsedListHeaderView : UICollectionReusableView

@property (retain, nonatomic) IESLiveGiftMostlyUsedListHeaderViewModel *viewModel;
@property (retain, nonatomic) IESLiveGiftMostlyUsedSwitchView *pinSwitch;
@property (retain, nonatomic) UIImageView *introImage;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UILabel *pinLabel;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) RACCompoundDisposable *disposable;

- (void)bindViewModel;
- (void)showIntroduceTip;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateWithViewModel:(id)a0;

@end
