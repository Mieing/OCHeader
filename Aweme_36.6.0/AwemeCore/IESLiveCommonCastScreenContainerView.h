@class UIImageView, UIButton, UIView;
@protocol IESLiveCommonCastScreenContainerViewDelegate;

@interface IESLiveCommonCastScreenContainerView : UIView

@property (retain, nonatomic) UIView *elementView;
@property (retain, nonatomic) UIView *castScreenView;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) UIButton *castScreenEndButton;
@property (nonatomic) BOOL shouldHideEndButton;
@property (weak, nonatomic) id<IESLiveCommonCastScreenContainerViewDelegate> delegate;
@property (retain, nonatomic) UIView *elementContentContainer;
@property (retain, nonatomic) UIButton *showElementViewButton;
@property (retain, nonatomic) UIButton *showCastScreenButton;

- (void)setupPublicScreenView:(id)a0;
- (void)switchCastScreenIfNeedClicked;
- (void)endCastScreenButtonClicked;
- (void)showElementViewButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageIcon:(id)a1 elementView:(id)a2 shouldHideEndButton:(BOOL)a3;
- (void).cxx_destruct;

@end
