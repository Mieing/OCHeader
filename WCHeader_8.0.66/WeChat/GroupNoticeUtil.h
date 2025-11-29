@interface GroupNoticeUtil : NSObject

+ (id)getUserRootDir;
+ (id)getDataDir;
+ (id)getDataDirWithChatName:(id)a0;
+ (id)getDataDirWithChatName:(id)a0 localId:(unsigned int)a1;
+ (id)getDataPathWithChatName:(id)a0 localId:(unsigned int)a1 fileName:(id)a2 isThumb:(BOOL)a3 dataFmt:(id)a4;
+ (id)getTmpDir;
+ (id)getTmpDirWithChatName:(id)a0;
+ (id)getTmpDirWithChatName:(id)a0 sourceId:(id)a1;
+ (id)getTmpPathWithChatName:(id)a0 sourceId:(id)a1 fileName:(id)a2 isThumb:(BOOL)a3 dataFmt:(id)a4;
+ (id)genUniqueKey;
+ (id)dataFromHexString:(id)a0;
+ (id)ConvertData2MsgWrap:(id)a0;
+ (id)ConvertData2Item:(id)a0;

@end
