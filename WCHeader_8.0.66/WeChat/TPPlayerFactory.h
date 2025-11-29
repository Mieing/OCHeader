@interface TPPlayerFactory : NSObject

+ (id)createTPPlayerWithPlayingQueue:(id)a0;
+ (id)createTPPlayerWithPlayingQueue:(id)a0 delegateQueue:(id)a1;
+ (id)createConnectMgr;
+ (id)createRichMediaSynchronizer;
+ (id)createRichMediaASyncRequester;

@end
