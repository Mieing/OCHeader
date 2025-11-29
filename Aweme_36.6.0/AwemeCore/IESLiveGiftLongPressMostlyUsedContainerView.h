@class IESLiveGiftMostlyUsedButton, IESLiveGiftMostlyUsedButtonViewModel;

@interface IESLiveGiftLongPressMostlyUsedContainerView : UIView

@property (retain, nonatomic) IESLiveGiftMostlyUsedButtonViewModel *viewModel;
@property (retain, nonatomic) IESLiveGiftMostlyUsedButton *operationView;

- (void)setItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
