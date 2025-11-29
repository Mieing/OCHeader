@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WCPreparedUpdateMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *downloadTaskDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ppDownloadQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_checkPreparedPatchVersion:(id)a0;
+ (id)p_startDownloadWithExpInVersion:(id)a0;
+ (void)p_startDownloadUpdate:(id)a0 withVersion:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)verifyUpdateData:(id)a0 withBootsInfo:(id)a1;

@end
