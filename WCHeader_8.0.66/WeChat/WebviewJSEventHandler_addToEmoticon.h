@class NSString, EmoticonCustomManageAddLogic;

@interface WebviewJSEventHandler_addToEmoticon : WebviewJSEventHandlerBase <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, MMImageLoaderObserver> {
    NSString *m_activityId;
}

@property (retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic;
@property (retain, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) NSString *currentThumbUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)addToEmoticonWithData:(id)a0;
- (void)AddEmoticonFinishedWithWrap:(id)a0 IsSuccessed:(BOOL)a1;
- (id)getViewController;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
