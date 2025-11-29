@class NSString, NSArray, UIImageView, NSMutableArray, WCPayBindCardInfo;
@protocol WCPaySpecifySelectePayCardListViewDelegate;

@interface WCPaySpecifySelectePayCardListView : MMUIView <CAAnimationDelegate> {
    WCPayBindCardInfo *selectedPayCardInfo;
    NSArray *m_arrBindCard;
    NSMutableArray *m_arrButtonArray;
    UIImageView *m_backgroundView;
    id<WCPaySpecifySelectePayCardListViewDelegate> m_delegate;
}

@property BOOL openFieldArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useChangeCardViewV2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPayCardList:(id)a1 BanlanceInfo:(id)a2 Description:(id)a3 delegate:(id)a4 LQTInfo:(id)a5 isOpenFieldArea:(BOOL)a6;
- (void)showAnimation;
- (void)OnCompleteButtonDone:(id)a0;
- (void)onCancelButtonDone;
- (void)OnSelectedCard:(id)a0;
- (void)OnSelectedNewCard:(id)a0;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void).cxx_destruct;

@end
