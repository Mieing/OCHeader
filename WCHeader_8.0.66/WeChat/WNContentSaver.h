@interface WNContentSaver : MMObject

+ (id)saveWithContext:(id)a0;
+ (void)saveHTML:(id)a0 toFavItem:(id)a1;
+ (id)tryRemoveChatVoiceInFavItem:(id)a0;
+ (id)getContextOfItem:(id)a0;
+ (void)clearCacheContent;
+ (void)saveTempWeNoteItemInContext:(id)a0;
+ (void)tryOpenCacheItem:(id)a0 handler:(id /* block */)a1;
+ (id)exportStringToTextData:(id)a0;
+ (id)exportHTMLStringToData:(id)a0;

@end
