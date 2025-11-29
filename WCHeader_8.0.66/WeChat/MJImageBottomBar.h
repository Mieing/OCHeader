@class UIStackView, MMUIButton;
@protocol MJImageBottomBarDelegate;

@interface MJImageBottomBar : UIView {
    UIStackView *_panelButtonsContainer;
}

@property (readonly, nonatomic) MMUIButton *musicButton;
@property (readonly, nonatomic) MMUIButton *textButton;
@property (readonly, nonatomic) MMUIButton *decoButton;
@property (readonly, nonatomic) MMUIButton *doneButton;
@property (weak, nonatomic) id<MJImageBottomBarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void)_layoutViews;
- (void)buttonTouchUpInside:(id)a0;
- (BOOL)shouldShowMusicButton;
- (void).cxx_destruct;

@end
