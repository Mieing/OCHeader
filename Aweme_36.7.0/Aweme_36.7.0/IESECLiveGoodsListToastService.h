@class NSDictionary, IESECLiveStateView;

@interface IESECLiveGoodsListToastService : IESECLiveGoodsListBaseServiceV2

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) NSDictionary *nowToastContentDic;
@property (retain, nonatomic) NSDictionary *nextToastContentDic;
@property (retain, nonatomic) IESECLiveStateView *stateView;

- (void)forceShowDisclaimer:(long long)a0 extraInfo:(id)a1 confirmBlock:(id /* block */)a2 cancleBlock:(id /* block */)a3;
- (void)showStateViewLoadingInView:(id)a0;
- (void)removeStateView;
- (void)showStateViewInView:(id)a0 emptyType:(unsigned long long)a1 imageName:(id)a2 title:(id)a3 showActionButton:(BOOL)a4 actionBlock:(id /* block */)a5;
- (void)showForceFetchToastViewWithContent:(id)a0 containerView:(id)a1 topMargin:(double)a2;
- (void)showGoodsListToastWithText:(id)a0 containerView:(id)a1 topMargin:(double)a2;
- (void)remakeStateUIInView:(id)a0;
- (void)setupStateViewUI;
- (void).cxx_destruct;

@end
