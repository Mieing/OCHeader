@class NSString, UIImageView, MMFinderLivePivotEducationViewModel, UIView, MMUILabel;

@interface MMFinderLivePivotEducationView : UIView <MMFinderLivePivotEducationViewModelDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *upIconView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (nonatomic) BOOL touchToDismiss;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) id /* block */ hitTestBlock;
@property (copy, nonatomic) id /* block */ clickTipsViewBlock;
@property (retain, nonatomic) MMFinderLivePivotEducationViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)refreshLayout;
- (void)refreshBackgroundViewHeight:(double)a0;
- (void)scrollToOtherLiveTask;
- (void)disMissSelf;
- (void)onScrollViewDidScroll:(id)a0;
- (void)updateViewModel:(id)a0;
- (double)viewHeight;
- (id)educationView;
- (void)onTipsAlphaChange:(id)a0 tipsAlpha:(double)a1;
- (void)onTipsHeightChange:(id)a0 tipsHeight:(double)a1;
- (double)tipsContainerViewHeight;
- (void).cxx_destruct;

@end
