@class NSString, EmojiInfoObj, EmoticonCustomAddLogicController;

@interface WebviewJSEventHandler_emoticonSingleOperation : WebviewJSEventHandlerBase <IStoreEmotionSingleDownloadMgrExt, MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) long long opType;
@property (nonatomic) int emotionScene;
@property (retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)startDownloadEmoji;
- (void)realDoAction;
- (void)addWithEmojiInfoObj:(id)a0 addScene:(int)a1;
- (void)endWithOK;
- (id)getViewController;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imagePath:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void)onAddEmoticonFinishedWithWrap:(id)a0 isSucceeded:(BOOL)a1;
- (void).cxx_destruct;

@end
