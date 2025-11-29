@class EmoticonCustomManageAddLogic, NSString, NSData, EmojiInfoObj;

@interface WebviewJSEventHandler_emoticonAPICollection : WebviewJSEventHandlerBase <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) long long opType;
@property (nonatomic) long long silentAction;
@property (nonatomic) int operationScene;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) BOOL showDesignerEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)startDownloadEmoji;
- (void)realDoAction;
- (BOOL)decodeImageDataFrom:(id)a0;
- (BOOL)checkImageDataMd5AndSave:(id)a0;
- (void)forwardWithMD5:(id)a0 emojiInfoObj:(id)a1 imageData:(id)a2;
- (void)addWithEmojiInfoObj:(id)a0 addScene:(int)a1;
- (void)endWithOK;
- (void)AddEmoticonFinishedWithWrap:(id)a0 IsSuccessed:(BOOL)a1;
- (id)getViewController;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
