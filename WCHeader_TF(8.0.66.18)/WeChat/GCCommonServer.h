@interface GCCommonServer : GCBaseServer

- (void)getLiteConfig:(id)a0 completionBlock:(id /* block */)a1;
- (void)reportEmptyGameRedpoint:(id /* block */)a0;
- (void)pullUserMessageWithData:(unsigned int)a0 andTransData:(id)a1 completionBlock:(id /* block */)a2;
- (void)getRemindUserList:(id)a0 context:(id)a1 pageLimit:(unsigned int)a2 completionBlock:(id /* block */)a3;

@end
