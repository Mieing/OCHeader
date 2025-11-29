@interface QQMsgHelperContactInfoAssist : BrandBasedPluginContactInfoAssist

@property (nonatomic) BOOL isChange;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)viewDidAppear;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)reloadInstalledTableViewData;
- (void)installPlugin;
- (id)getPluginIntro;
- (void)onModifyContact:(id)a0;
- (void)dealloc;

@end
