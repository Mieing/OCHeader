@class IESECLiveGoodsHotSaleModel, IESECLiveHotSaleView, NSString, IESECGCDTimer;
@protocol IESECLiveListHotSaleViewDelegate;

@interface IESECLiveListHotSaleView : UIView <IESECLiveHotSaleViewDelegate>

@property (nonatomic) long long curState;
@property (nonatomic) unsigned long long curSaleNum;
@property (retain, nonatomic) IESECGCDTimer *dismissTimer;
@property (weak, nonatomic) id<IESECLiveListHotSaleViewDelegate> delegate;
@property (retain, nonatomic) IESECLiveGoodsHotSaleModel *hotsaleInfo;
@property (retain, nonatomic) IESECLiveHotSaleView *hotsaleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hotsaleView:(id)a0 stateChanged:(long long)a1 hotsaleInfo:(id)a2;
- (void)p_delegateAnimationStateChanged:(long long)a0 hotsaleInfo:(id)a1;
- (void)setupDismissTimerIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
