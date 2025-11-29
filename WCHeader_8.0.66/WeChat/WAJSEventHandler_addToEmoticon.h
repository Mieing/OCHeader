@class NSString, EmoticonCustomManageAddLogic;

@interface WAJSEventHandler_addToEmoticon : WAJSEventHandler_BaseEvent <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, MMImageLoaderObserver>

@property (retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic;
@property (retain, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) NSString *currentMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)addToEmoticonWithData:(id)a0;
- (void)AddEmoticonFinishedWithWrap:(id)a0 IsSuccessed:(BOOL)a1;
- (id)getViewController;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)showFailTip;
- (void).cxx_destruct;

@end
