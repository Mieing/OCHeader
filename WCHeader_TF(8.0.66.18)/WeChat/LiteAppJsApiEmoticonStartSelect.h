@class NSString, UIViewController, LiteAppJsApiCallback;

@interface LiteAppJsApiEmoticonStartSelect : LiteAppJsApi <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate> {
    LiteAppJsApiCallback *_callBack;
    UIViewController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)presentEmoticonPanelModal:(id)a0;
- (id)createEmoticonPanel:(id)a0;
- (id)getEmoticonPanel;
- (void)showEmoticonPanel:(id)a0;
- (void)removeEmoticonPanel;
- (void)onBackgroundTapped;
- (void)didSelectorEmoticon:(id)a0;
- (void)didSelectorSelfDefinedEmotcion:(id)a0;
- (void)onSendButtonClicked;
- (void)onEmoticonSearchIconClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)a0;
- (void).cxx_destruct;

@end
