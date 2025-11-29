@class UrlController, NSString;
@protocol TXNewsYuanBaoPluginDelegate;

@interface TXNewsYuanBaoPlugin : NSObject <CustomMenuToolViewDelegate, UrlControllerDelegate>

@property (retain, nonatomic) UrlController *urlController;
@property (weak, nonatomic) id<TXNewsYuanBaoPluginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)YuanBaoPluginConfig;

- (void)configToolView:(id)a0;
- (BOOL)shouldShowChangeModeBtn;
- (id)getViewController;
- (void)verifyContactByUsrName:(id)a0;
- (void)onJumpToWebView:(id)a0;
- (void)onChangeToInputMode;
- (void)onChangeToMenuMode:(id)a0;
- (void)onSubMenuPresentWithIndex:(long long)a0 ArrowX:(double)a1;
- (void)onSubMenuDismiss;
- (void)onReportClickEvent:(id)a0;
- (void)onReportParentClickEvent:(id)a0;
- (void)onRecordActionEvent:(id)a0;
- (BOOL)onJumpToNativeView:(id)a0;
- (void)onJumpToScanView:(id)a0;
- (void)onJumpToPicView:(id)a0;
- (void)onJumpToPOIView:(id)a0;
- (void)onJumpToBrandSearchView:(id)a0;
- (void)onOpenWeAppWithJSONString:(id)a0 fromScene:(unsigned int)a1 btnName:(id)a2 btnLevel:(unsigned long long)a3;
- (void)onJumpToEcs:(id)a0;
- (void)onJumpToProfile:(id)a0;
- (id)getBrandContactUsername;
- (void).cxx_destruct;

@end
