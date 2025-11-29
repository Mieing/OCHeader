@class NSString, JSEvent, UINavigationController;

@interface WebviewJSEventHandler_openDesignerEmojiView : WebviewJSEventHandlerBase <IStoreEmotionDesignerInfoMgrExt> {
    JSEvent *m_event;
    NSString *m_designerId;
    UINavigationController *m_navigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionForBannerSet:(id)a0;

- (BOOL)handleWithParams:(id)a0 AndViewController:(id)a1;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)handleWithParams:(id)a0 AndNavigationController:(id)a1 isHandleImmediately:(BOOL)a2;
- (id)viewControllerWithParams:(id)a0;
- (id)viewControllerWithParams:(id)a0 PageType:(unsigned int)a1;
- (long long)checkPageTypeForParams:(id)a0;
- (void)endWithOk;
- (void)endWithFail;
- (void)openDesignerEmojiViewControllerWithDesignerId;
- (void)openDesignerEmojiViewControllerWithDesignerUin:(unsigned int)a0;
- (void)onGetDesignerForDesignerId:(id)a0 AndDesigner:(id)a1;
- (void).cxx_destruct;

@end
