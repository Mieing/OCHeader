@class NSString, MMUIViewController, CMessageWrap;

@interface AppMessageBlockButton : MMUIButton <WCActionSheetDelegate, ITemplateMsgRecvExt>

@property (weak, nonatomic) MMUIViewController *baseViewController;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)changeMessageState;
- (void)showAlertView;
- (void)updateRecvMsgState:(BOOL)a0;
- (void)showActionSheet;
- (id)combineBaseUrl:(id)a0 withParams:(id)a1;
- (void)onReport;
- (void)onBlockTemplateMsg;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onTemplateMsgConnectionChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
