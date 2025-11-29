@class UILabel, CameraScanBlurEffectView;

@interface CameraScanTabSwitchingView : MMUIView

@property (retain, nonatomic) CameraScanBlurEffectView *blurView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (nonatomic) double tabViewHeight;

- (id)init;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)showSnapshotImageWithAnimation:(id)a0 blurImage:(id)a1 completeHandler:(id /* block */)a2;
- (void)hideSnapshotImageWithCompleteHandler:(id /* block */)a0;
- (void)setCenterLabelText:(id)a0;
- (void)setCenterLabelHidden:(BOOL)a0 hasAnimation:(BOOL)a1;
- (struct CGSize { double x0; double x1; })areaSizeAboveTabView;
- (void).cxx_destruct;

@end
