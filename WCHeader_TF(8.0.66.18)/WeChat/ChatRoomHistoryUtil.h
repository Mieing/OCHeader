@interface ChatRoomHistoryUtil : NSObject

+ (id)DataFromRecordMsg:(id)a0;
+ (id)RecordMsgFromData:(id)a0;
+ (id)TmpPathForUploadRecordMsg;
+ (id)PathForUploadRecordMsg:(id)a0;
+ (id)TmpPathForHistoryRecord:(id)a0;
+ (id)PathForHistoryRecord:(id)a0;
+ (id)GetHistoryMsgDBConfigPath;
+ (id)GetHistoryMsgDBPath;
+ (id)GetInviteAddMsgDataFilePath;

@end
