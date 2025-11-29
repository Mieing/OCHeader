@class IESECBuyNowSKUContext, NSString, UIView;
@protocol IESECSkuBuyNowDelegate;

@interface IESECBuyNowSKUView : UIView <IESECSKUViewProtocol, IESECHalfPageFloatContainerDelegate, IESECBuyNowSKUDelegate>

@property (retain, nonatomic) IESECBuyNowSKUContext *context;
@property (retain, nonatomic) UIView *skuMaskView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) UIView *topFloatView;
@property (retain, nonatomic) id<IESECSkuBuyNowDelegate> buynowVC;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } wholeFrame;
@property (nonatomic) long long panelShowState;
@property (nonatomic) BOOL animationFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 showResult:(BOOL)a1;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (void)showWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)tapMaskView;
- (void)dismissWithAnimation:(id /* block */)a0 closeType:(long long)a1 completion:(id /* block */)a2;
- (void)updateSKUFromUpdatedSKUInfo:(id)a0;
- (void)setupBTM;
- (void)setupAPT;
- (id)eventImpl;
- (void)p_handleDuplicatedAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originPanelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalPanelFrame;
- (void)updateTopFloatBannerIfNeeded;
- (void)p_manageTopFloatViewToShow:(BOOL)a0;
- (void)renewMaskViewAlpha;
- (void)renewPanelContainerHeight;
- (void)dismissWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)delegate;
- (void)dealloc;
- (void)setupUI;
- (id)dataController;
- (id)heightPercent;

@end
