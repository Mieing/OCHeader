@class WCPayControlData, NSString, NSArray, UIView, NSMutableArray, WCPayBindCardInfo;
@protocol WCPayAvaliablePayCardListViewDelegate;

@interface WCPayAvaliablePayCardListView : MMUIView <ILinkEventExt, MMWebViewDelegate, CAAnimationDelegate> {
    WCPayBindCardInfo *selectedPayCardInfo;
    NSArray *m_arrBindCard;
    NSMutableArray *m_arrButtonArray;
    UIView *m_backgroundView;
    WCPayControlData *m_data;
    id<WCPayAvaliablePayCardListViewDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (void)showAnimation;
- (void)OnCompleteButtonDone:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (void)onCancelButtonDone;
- (void)OnSelectedCard:(id)a0;
- (void)OnSelectedNewCard:(id)a0;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void)didMoveToWindow;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)webViewReturn:(id)a0;
- (void).cxx_destruct;

@end
