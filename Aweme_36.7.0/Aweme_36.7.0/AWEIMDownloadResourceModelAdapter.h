@interface AWEIMDownloadResourceModelAdapter : NSObject

+ (id)transferCommonEmojiResToDownloadModel:(id)a0;
+ (id)collectResourceWith:(id)a0 resourceType:(unsigned long long)a1;
+ (id)transferSpecialEmojiResToDownloadModel:(id)a0;
+ (id)transferInteractiveResToDownloadModel:(id)a0;
+ (id)transferInteractiveDynamicResToDownloadModel:(id)a0;
+ (id)getDownloadResourceModelWith:(id)a0 type:(unsigned long long)a1 name:(id)a2;
+ (id)commonBigAnimationReoucesWith:(id)a0;
+ (id)collectResourceWith:(id)a0;
+ (id)getDownloadResourcePathWith:(id)a0 type:(unsigned long long)a1 name:(id)a2;

@end
