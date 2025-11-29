@class NSString, IESECShopPopupOverlayView, IESECLynxCardBridgeEventSubscriber;
@protocol IESECShopPopupScrollingFilter;

@interface IESECShopPopupController : IESECRelationController <IESECShopPopupControllerProtocol> {
    IESECShopPopupOverlayView *_popupOverlayView;
    NSString *_contextIdentifier;
    long long _visibilityEventOnceToken;
    BOOL _scrolling;
    IESECLynxCardBridgeEventSubscriber *_subscriber;
}

@property (nonatomic) BOOL popupConflict;
@property (retain, nonatomic) id<IESECShopPopupScrollingFilter> scrollingFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishEvent:(id)a0;
- (void)publishEvent:(id)a0 parameters:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewWillBeginDragging:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidEndDecelerating:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (id)popupOverlayView;
- (void)updatePopupURL:(id)a0;
- (void)publishPopupVisibilityEvent;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
