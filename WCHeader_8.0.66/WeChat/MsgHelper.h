@interface MsgHelper : NSObject

+ (id)GetChatName:(id)a0 Des:(unsigned int *)a1;
+ (BOOL)InternalCanNotAddDB:(id)a0 ChatName:(id)a1;
+ (BOOL)newXMLCannotAddToDB:(id)a0;
+ (BOOL)AppMsgCannotAddToDB:(id)a0;
+ (BOOL)isCannotAddToDBWithVideoMsg:(id)a0;
+ (BOOL)CanNotAddToDB:(id)a0 ChatName:(id)a1;
+ (BOOL)IsNotifyOnNotAddDB:(id)a0 ChatName:(id)a1;
+ (BOOL)HandleThumb:(id)a0 Message:(id)a1 Lock:(id)a2;
+ (void)ClearDownloadData:(id)a0 ChatName:(id)a1;
+ (BOOL)AddMessageToNewWCPayBizExt:(id)a0 DB:(id)a1 type:(int)a2;
+ (BOOL)AddMessageToWCPayMsgBizExt:(id)a0 DB:(id)a1;
+ (BOOL)ProcessOnAddNewMsg:(id)a0 ChatName:(id)a1 Lock:(id)a2;
+ (BOOL)AddMsgInfo:(id)a0 withHandle:(id)a1;
+ (BOOL)AddExtMsgInfo:(id)a0 withHandle:(id)a1;
+ (BOOL)IsShowPush:(BOOL)a0 Des:(unsigned int)a1 Msg:(id)a2;

@end
