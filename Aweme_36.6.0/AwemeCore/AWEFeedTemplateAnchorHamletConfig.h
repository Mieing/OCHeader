@protocol AWEBDXPopupShrinkVideoHelper;

@interface AWEFeedTemplateAnchorHamletConfig : AWEFeedTemplateAnchorBaseConfig

@property (retain, nonatomic) id<AWEBDXPopupShrinkVideoHelper> bdxPopupHelper;

- (void)handlerTemplateAnchorViewClicked;
- (BOOL)tryOpenBulletPopup:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
