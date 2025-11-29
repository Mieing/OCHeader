@interface MailRTEPasteMgr : MMObject

+ (void)copy:(id)a0;
+ (id)copyAttachmentsInAttributedString:(id)a0;
+ (id)copyAttachment:(id)a0;
+ (id)getDescOfAttachment:(id)a0;
+ (id)getPasteData;
+ (BOOL)hasPasteData;

@end
