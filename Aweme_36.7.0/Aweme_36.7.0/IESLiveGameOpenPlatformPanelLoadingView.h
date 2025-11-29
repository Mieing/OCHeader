@class UILabel, UIView;

@interface IESLiveGameOpenPlatformPanelLoadingView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (nonatomic) BOOL enableTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleEnable:(BOOL)a1;
- (void)startLoadingWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopLoadingWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
