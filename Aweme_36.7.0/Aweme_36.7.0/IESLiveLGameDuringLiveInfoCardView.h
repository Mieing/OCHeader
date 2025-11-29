@class IESLiveWebpLoadingView, IESLiveLGameDuringLiveGameCardView, IESLiveLGameDuringLiveDataCardView, IESLiveLGameNetworkErrorView;
@protocol IESLiveLGameDuringLiveInfoCardViewDelegate;

@interface IESLiveLGameDuringLiveInfoCardView : UIView

@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveLGameNetworkErrorView *loadErrView;
@property (retain, nonatomic) IESLiveLGameDuringLiveDataCardView *dataCard;
@property (retain, nonatomic) IESLiveLGameDuringLiveGameCardView *gameInfoCard;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveInfoCardViewDelegate> viewDelegate;

- (void)onCloseButtonClick;
- (id)titleName;
- (void)showContent:(BOOL)a0;
- (void)removeLoadErrorView;
- (void)setLoadError;
- (void)updateInfoCardWithModel:(id)a0;
- (void)updateLotteryButton:(BOOL)a0;
- (void)updateExplainButtonState:(unsigned long long)a0;
- (void)onExitMountButtonClick;
- (void)refreshButtonClick;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)setupUI;

@end
