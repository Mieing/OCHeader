@class EmojiInfoObj, NSString;

@interface LiteAppJsApiEmoticonOpenHalfScreenSendView : LiteAppJsApi <EmoticonHalfScreenSendViewDelegate>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) int emoticonScene;
@property (nonatomic) int addEmoticonSource;
@property (nonatomic) BOOL showEntry;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (retain, nonatomic) NSString *sdkRequestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)openHalfScreen;
- (id)getViewController;
- (void)endWithOK;
- (void).cxx_destruct;

@end
