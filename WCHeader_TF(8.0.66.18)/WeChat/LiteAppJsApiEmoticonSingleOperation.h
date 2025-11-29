@class EmojiInfoObj, NSString, EmoticonCustomAddLogicController;

@interface LiteAppJsApiEmoticonSingleOperation : LiteAppJsApi <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>

@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) unsigned long long opType;
@property (nonatomic) int emotionScene;
@property (nonatomic) BOOL hideOperateOK;
@property (retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)startDownloadEmoticon:(id)a0;
- (void)realDoAction;
- (void)addWithEmojiInfoObj:(id)a0 addScene:(int)a1;
- (void)forwardEmojiInfo;
- (void)onFollowEmoticonCamera;
- (void)onExpose;
- (void)endWithOK;
- (id)getViewController;
- (id)msgWrapForOperation;
- (id)extraDataForExpose;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void)onTakePhotoCancelled;
- (void)onAddEmoticonFinishedWithWrap:(id)a0 isSucceeded:(BOOL)a1;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)a0;
- (void)onAddEmoticonDetectIfDismissViewController:(id)a0;
- (void).cxx_destruct;

@end
