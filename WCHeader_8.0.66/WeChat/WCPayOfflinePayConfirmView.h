@class NSString, UIImageView, WCPayTenpayPasswordCtrlItem;
@protocol WCPayOfflinePayConfirmViewDelegate;

@interface WCPayOfflinePayConfirmView : MMUIView <CAAnimationDelegate, WCBaseInfoItemDelegate> {
    UIImageView *m_backgroundView;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    id<WCPayOfflinePayConfirmViewDelegate> m_delegate;
}

@property unsigned char routeInfo;
@property (retain, nonatomic) id m_userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (void)showAnimation;
- (void)closeView;
- (void)onPayBtnClick;
- (void)onCancelBtnClick;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void).cxx_destruct;

@end
