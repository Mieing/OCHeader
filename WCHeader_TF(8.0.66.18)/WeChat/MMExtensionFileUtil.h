@interface MMExtensionFileUtil : NSObject

+ (BOOL)clearPostCacheWithSessionID:(id)a0;
+ (id)getExtWCUploadTaskWithSessionID:(id)a0 andTaskID:(unsigned long long)a1;
+ (id)getAllExtWCUploadFailTaskFiles;
+ (id)getWCUploadTaskWithTaskFilePath:(id)a0;
+ (BOOL)removeTimelineUploadTaskFileWithSessionID:(id)a0 withTaskID:(unsigned long long)a1;
+ (id)getMessagePostMetaDataFilePathWithClientID:(id)a0;
+ (BOOL)removeMessagePostMetaDataFilePathWithClientID:(id)a0;
+ (id)getAllMessageFailSessionFile;
+ (id)getMessagePostTaskIdDataFailePathWithSessionID:(id)a0 andTaskID:(id)a1;
+ (BOOL)removeMessagePostTaskIdDataWithSessionID:(id)a0 withTaskID:(unsigned long long)a1;
+ (BOOL)addMessageFailPostSessionDataToFile:(id)a0 WithSessionID:(id)a1 withTaskID:(unsigned long long)a2;
+ (id)getAllExtFavImgTaskFiles;
+ (id)getAllExtFavUrlTaskFiles;
+ (id)getAllExtFavVideoTaskFiles;
+ (id)getAllExtFavFileTaskFiles;
+ (void)clearAllExtFavImgTaskFiles;
+ (void)clearAllExtFavUrlTaskFiles;
+ (void)clearAllExtFavVideoTaskFiles;
+ (void)clearAllExtFavFileTaskFiles;
+ (id)getAllExtIdKeyReportFiles;
+ (void)clearAllExtIdKeyReportFiles;

@end
