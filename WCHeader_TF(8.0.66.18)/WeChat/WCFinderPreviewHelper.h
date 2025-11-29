@interface WCFinderPreviewHelper : NSObject

+ (id)parseSourceUrl:(id)a0;
+ (id)supportPreviewType;
+ (BOOL)shouldShowLongPressAction:(id)a0;
+ (BOOL)shouldShowLongPressActionAtMention:(id)a0;
+ (id)longPressActionRowView:(id)a0;
+ (id)longPressActionRowViewAtMention:(id)a0;
+ (void)handleLongPressActionClickMentionRowView:(id)a0 fromNav:(id)a1;
+ (void)handleLongPressActionClickRowView:(id)a0 fromNav:(id)a1;
+ (Class)previewHandleClassForType:(id)a0;
+ (Class)previewHandleClassForScanType:(int)a0;
+ (void)handleQRCodeEvent:(id)a0 fromNav:(id)a1 complete:(id /* block */)a2;
+ (void)_handleQRCodeEventResp:(id)a0 fromNav:(id)a1;
+ (void)jumpToMomentInfoPreview:(id)a0 fromVC:(id)a1;
+ (void)jumpToSource:(id)a0 fromNav:(id)a1 cardType:(int)a2 enterType:(unsigned long long)a3;

@end
