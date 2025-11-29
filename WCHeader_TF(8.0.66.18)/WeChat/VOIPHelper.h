@interface VOIPHelper : NSObject

+ (void)EnableVoIPComLog;
+ (void)DisableVoIPComLog;
+ (void)APNSPushWithUsrInfo:(id)a0 requestID:(id)a1;
+ (void)DataNotifyWithData:(id)a0;
+ (void)HandleExtNotifydata:(id)a0 andRoomId:(unsigned long long)a1 andRoomKey:(unsigned long long)a2;
+ (void)NotifyWithData:(id)a0;
+ (void)checkIfUInt64RoomIDOutOfInt32:(unsigned long long)a0;

@end
