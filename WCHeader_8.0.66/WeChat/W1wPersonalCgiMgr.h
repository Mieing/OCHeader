@interface W1wPersonalCgiMgr : NSObject

+ (id)generateReq;
+ (void)getMsgContactList:(id)a0 completion:(id /* block */)a1;
+ (void)getMsgSessionInfo:(id)a0 to_username:(id)a1 msg_session_id:(id)a2 completion:(id /* block */)a3;
+ (void)reportDataWithRequest:(id)a0 completion:(id /* block */)a1;

@end
