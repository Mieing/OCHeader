@class WCPayOfflinePayEnablePageData;
@protocol WCPayOfflineEnablePageTipsViewDelegate;

@interface WCPayOfflineEnablePageTipsView : MMUIView

@property (weak, nonatomic) id<WCPayOfflineEnablePageTipsViewDelegate> delegate;
@property (retain, nonatomic) WCPayOfflinePayEnablePageData *viewData;

- (id)initTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 viewData:(id)a2;
- (void)setupContentView;
- (void)verifyBtnClick;
- (void).cxx_destruct;

@end
