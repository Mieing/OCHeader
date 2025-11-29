@interface WeNotePasteManager : NSObject

+ (void)reset;
+ (id)CopyAttachment:(id)a0 copyScene:(int)a1;
+ (id)getCopyAttachmentNativeItemWith:(id)a0;
+ (id)getCopyAttachmentWith:(id)a0;
+ (id)AddPasteAttachment:(id)a0;
+ (id)FindPasteAttachmentWith:(id)a0;
+ (void)ClearAllPasteAttachment;
+ (id)getTempPathWithMd5:(id)a0 isThumb:(BOOL)a1 dataFmt:(id)a2;
+ (void)resetCdnInfo:(id)a0;

@end
