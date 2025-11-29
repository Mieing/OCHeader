@interface DownloadVoiceCommon : NSObject

+ (BOOL)WriteAudioFile:(id)a0 LocalID:(unsigned int)a1 Offset:(unsigned int)a2 Len:(unsigned int)a3 Data:(id)a4;
+ (id)parseVoiceXml:(id)a0;

@end
