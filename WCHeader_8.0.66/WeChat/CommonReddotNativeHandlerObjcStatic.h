@interface CommonReddotNativeHandlerObjcStatic : NSObject

+ (void)onReddotSyncResponse:(unsigned int)a0 scene:(unsigned int)a1 finderCommonReddotSyncResponse:(id)a2;
+ (void)getFinderTipsShowInfo:(id)a0 callback:(id /* block */)a1;
+ (void)disposeReddot:(id)a0 callback:(id /* block */)a1;
+ (void)getReddotCtrlInfo:(id)a0 callback:(id /* block */)a1;
+ (id)generateSyncClientInfo:(unsigned int)a0;
+ (void)generateShowInfoReportJson:(id)a0 callback:(id /* block */)a1;
+ (id)generateClientAIInfo:(unsigned int)a0;
+ (id)generateEntranceExposeContent:(unsigned int)a0;
+ (id)generateSyncClientStatus:(unsigned int)a0;
+ (BOOL)canSendSyncRequest:(unsigned int)a0 request:(id)a1;
+ (void)asyncGenerateEntranceExposeContent:(unsigned int)a0 callback:(id /* block */)a1;
+ (void)asyncGenerateSyncClientInfo:(unsigned int)a0 callback:(id /* block */)a1;
+ (void)asyncGenerateClientAIInfo:(unsigned int)a0 callback:(id /* block */)a1;
+ (void)asyncGenerateClientSyncStatus:(unsigned int)a0 callback:(id /* block */)a1;
+ (id)generateClientSyncStatus:(unsigned int)a0;
+ (void)updateShowInfoTreeReddotCount:(id)a0;
+ (void)getReddotExposeInfosWithCallback:(id /* block */)a0;
+ (void)triggerNativeAction:(unsigned int)a0 request:(id)a1 callback:(id /* block */)a2;

@end
