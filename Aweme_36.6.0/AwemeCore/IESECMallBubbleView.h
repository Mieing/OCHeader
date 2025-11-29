@class IESECMallBubbleViewLayout, NSString, IESECMallLynxRenderMonitor, IESECLynxCard, UIView, NSNumber, IESECMallBubbleCardModel;
@protocol IESECMallPopupDelegate;

@interface IESECMallBubbleView : UIView <IESECLynxCardDelegate, IESECListCardsContextDelegate>

@property (retain, nonatomic) IESECLynxCard *bubbleView;
@property (nonatomic) BOOL lynxViewDidLoad;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) unsigned long long lastPageVisibleStatus;
@property (retain, nonatomic) IESECMallBubbleCardModel *cardModel;
@property (retain, nonatomic) IESECMallBubbleViewLayout *layout;
@property (weak, nonatomic) UIView *anchorView;
@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id anchorDeallocObserver;
@property (weak, nonatomic) id<IESECMallPopupDelegate> delegate;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSNumber *delayRefreshRemoveCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFirstScreen:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void)lynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 perfDict:(id)a2;
- (BOOL)pageDidAppeared;
- (id)currentListContextIdForCards;
- (id)currentBridgeCallHanderForCards;
- (id)currentListHomePageView;
- (id)hybridMonitorContext;
- (void)removeAllConstraints;
- (void)updateLynxData:(id)a0;
- (void)layoutBubbleView:(BOOL)a0;
- (void)createLynxCard;
- (void)bindAnchorView:(id)a0;
- (void)sendPageVisibilityChangeEvent:(unsigned long long)a0;
- (void)updateLayoutBubbleViewAfterPadRotation:(id)a0;
- (id)curLogPageName;
- (void)setGreyStyle;
- (BOOL)lynxCardEnableForest;
- (id)globalXBridges;
- (id)globalExtra;
- (id)rootGlobalExtra;
- (id)initWithCardModel:(id)a0 layoutInfo:(id)a1 delegate:(id)a2;
- (void)showInView:(id)a0 anchorView:(id)a1;
- (void)resetVisibility:(BOOL)a0;
- (void)viewDidAppear;
- (void)dismiss;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)viewDidDisappear;
- (void)addObservers;

@end
