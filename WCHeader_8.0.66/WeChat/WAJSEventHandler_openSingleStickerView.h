@class EmojiInfoObj, NSString;

@interface WAJSEventHandler_openSingleStickerView : WAJSEventHandler_BaseEvent <EmoticonHalfScreenSendViewDelegate>

@property (nonatomic) int emoticonScene;
@property (nonatomic) int addEmoticonSource;
@property (nonatomic) BOOL showEntry;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)openHalfScreen;
- (void).cxx_destruct;

@end
