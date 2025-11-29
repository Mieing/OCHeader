@class UIButton, NSString, WCPayOfflinePayBlockLayer;
@protocol WCPayOfflinePayBlockTipsViewDelegate;

@interface WCPayOfflineBlockTipsView : MMUIView <ILinkEventExt>

@property (weak, nonatomic) id<WCPayOfflinePayBlockTipsViewDelegate> delegate;
@property (retain, nonatomic) WCPayOfflinePayBlockLayer *viewData;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initBlockTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 viewData:(id)a2;
- (void)setupContentView;
- (void)startCountDownBtn;
- (void)confirmBtnClick;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
