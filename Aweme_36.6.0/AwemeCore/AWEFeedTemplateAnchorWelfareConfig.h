@protocol AWEBDXPopupShrinkVideoHelper;

@interface AWEFeedTemplateAnchorWelfareConfig : AWEFeedTemplateAnchorBaseConfig

@property (retain, nonatomic) id<AWEBDXPopupShrinkVideoHelper> bdxPopupHelper;

- (void)handlerTemplateAnchorViewClicked;
- (id)addParamsForOpenURL:(id)a0 extraInfo:(id)a1;
- (BOOL)tryOpenBulletPopup:(id)a0;
- (void).cxx_destruct;

@end
