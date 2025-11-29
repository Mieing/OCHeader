@class WCPayOfflinePayDisableBlockLayerTextInfo, WCPayOfflinePayDisableBlockLayer;
@protocol WCPayOfflineDisableBlockTipsViewDelegate;

@interface WCPayOfflineDisableBlockTipsView : MMUIView

@property (weak, nonatomic) id<WCPayOfflineDisableBlockTipsViewDelegate> delegate;
@property (retain, nonatomic) WCPayOfflinePayDisableBlockLayer *viewData;
@property (retain, nonatomic) WCPayOfflinePayDisableBlockLayerTextInfo *curTextInfo;

- (id)initTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 viewData:(id)a2;
- (void)setupContentView;
- (void)genCurLanguageTextInfo;
- (id)getCurLanguageMainWording;
- (id)getCurLanguageRemainderContent;
- (id)getCurLanguageBtnText;
- (void)confirmBtnClick;
- (void).cxx_destruct;

@end
