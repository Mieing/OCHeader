@class NSString, UIButton, UIView;
@protocol WCPayOrderDetailViewDelegate;

@interface WCPayOrderDetailView : MMUIView <ILinkEventExt> {
    double m_fBodyViewHeight;
    UIButton *m_btnFold;
    UIButton *m_btnUnFold;
    UIView *m_BodyView;
    UIView *m_HeaderView;
    UIView *m_FooterView;
    id<WCPayOrderDetailViewDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getViewWithOrderDetail:(id)a0 Data:(id)a1;
- (void)initBodyView:(id)a0;
- (void)initHeaderView:(id)a0 Data:(id)a1;
- (void)initFooterView:(id)a0 withBtn:(BOOL)a1;
- (void)onShowUserIntruction:(id)a0;
- (double)getMinHeight;
- (void)setBodyHeight:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Data:(id)a1 delegate:(id)a2;
- (void)OnFold;
- (void)OnUnfold;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
