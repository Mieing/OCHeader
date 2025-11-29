@class NSString, WCPayOrderDetail, UILabel;
@protocol WCPayHistoryOrderDetailViewDelegate;

@interface WCPayHistoryOrderDetailView : UIView <LongPressMenuViewDelegate, ILinkEventExt> {
    WCPayOrderDetail *m_oWCPayOrderDetail;
    UILabel *serialNameLable;
    UILabel *oProductSerialLabel;
    int m_enWCPayHistoryOrderDetailViewScene;
}

@property (weak, nonatomic) id<WCPayHistoryOrderDetailViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)GetFooterView:(id)a0;
- (void)onShowUserIntruction:(id)a0;
- (void)onShowAppProfile:(id)a0;
- (id)getDetailView:(id)a0 ShowedAppFrom:(BOOL)a1;
- (id)getMoneyView:(id)a0;
- (id)getExtentionView:(id)a0;
- (id)initWithOrderDetail:(id)a0 AppFromShowed:(BOOL)a1 Scene:(int)a2;
- (id)initWithOrderDetail:(id)a0 AppFromShowed:(BOOL)a1;
- (void)onLongPressMenuViewCopy:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)MenuControllerWillHide:(id)a0;
- (void)RetrySendTransferMessage;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
