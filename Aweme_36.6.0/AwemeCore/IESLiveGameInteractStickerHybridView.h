@class NSString, BDXBridgeEventSubscriber, IESLiveGameInteractStickerModel, UIView, NSNumber;
@protocol AnnieXLiveCardModelProtocol, IESHYContainerProtocol;

@interface IESLiveGameInteractStickerHybridView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveGameInteractStickerDisplayViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<AnnieXLiveCardModelProtocol> cardModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) IESLiveGameInteractStickerModel *stickerModel;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL isRefreshed;
@property (nonatomic) double startLoadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didLoadFinishedBlock;

- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (double)scaleRatio;
- (void)subscribeBridgeEvent;
- (void)updateStickerModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerModel:(id)a1 roomID:(id)a2 context:(id)a3 didLoadFinishedBlock:(id /* block */)a4;
- (long long)getReuseID;
- (void)setupSubViews:(id)a0;
- (void)destroySubViews;
- (void)updateHybridViewData:(id)a0;
- (void)sendEventToView:(id)a0 params:(id)a1;
- (void)showHybridView:(id)a0;
- (void)destroyHybridView;
- (id)createHybridView:(id)a0 urlParams:(id)a1 customGlobalProps:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 renderType:(unsigned long long)a4;
- (id)p_updateEventName;
- (void)unRegisterBridgeEvent;
- (void)callFinishBlock:(BOOL)a0 fromJSB:(BOOL)a1 error:(id)a2;
- (id)p_createScheme:(id)a0 urlParams:(id)a1 renderType:(unsigned long long)a2;
- (unsigned long long)p_kernalType;
- (id)p_loadEventName;
- (void)gameInteractLoadStatus:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)handleOrientationChange:(long long)a0;

@end
