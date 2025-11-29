@class WCPayTenpayPasswordCtrlItem, MMUIView, NSString;
@protocol WCPayLQTOrderConfirmViewDelegate;

@interface WCPayLQTOrderConfirmView : MMUIView <WCBaseInfoItemDelegate>

@property (weak, nonatomic) id<WCPayLQTOrderConfirmViewDelegate> delegate;
@property (nonatomic) unsigned int money;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) WCPayTenpayPasswordCtrlItem *pwdTextFieldItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initLQTConfirmViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 money:(unsigned int)a1 delegate:(id)a2;
- (void)setupSubView;
- (void)setupContentView;
- (void)showView;
- (void)hideView;
- (void)cancelBtnClick;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)onPayBtnClick;
- (void).cxx_destruct;

@end
