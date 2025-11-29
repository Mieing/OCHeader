@class IESLiveWebpLoadingView, IESLiveChargeViewModel, IESLiveEmptyViewConfig, UIView, IESLiveEmptyView, NSString, IESLiveChargeFullLoadingView, IESLiveChargeLoadingView;

@interface IESLiveChargeView : UIView <IESLiveChargeViewReaction, IESLiveChargeFullLoadingViewDelegate>

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *whiteBoard;
@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *darkBackgroundView;
@property (retain, nonatomic) IESLiveChargeLoadingView *loadingView;
@property (retain, nonatomic) IESLiveChargeFullLoadingView *chargeFullLoadingView;
@property (retain, nonatomic) IESLiveWebpLoadingView *dataLoadingView;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *emptyViewConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onChargeFullLoadingViewCloseBtnClick;
- (void)removeLoadingView;
- (void)updateViewHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 viewModel:(id)a2 diContext:(id)a3;
- (BOOL)showDS;
- (void)tapDarkBackgroud;
- (BOOL)isRightPopupMode;
- (void)showDataLoadingView;
- (void)updateAllChargeComponentsConstaraint;
- (double)popupModeBottomOffSet;
- (double)popupModeRightOffSet;
- (BOOL)loadingStyleOptizeEnable;
- (void)removeChargeView;
- (void)didFetchChargeData:(id)a0 error:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)show;
- (void)setupUI;
- (void)showLoadingView;

@end
