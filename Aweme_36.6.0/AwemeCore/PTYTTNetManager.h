@class NSMapTable, NSDictionary, NSString, NSLock;

@interface PTYTTNetManager : NSObject <PTYNetworkProtocol>

@property (nonatomic) BOOL reportFilterDur;
@property (retain, nonatomic) NSLock *taskLock;
@property (retain, nonatomic) NSMapTable *downloadTasks;
@property (retain, nonatomic) NSDictionary *rsHostPathMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)setup:(id)a0;

- (id)responseWithTTResponse:(id)a0;
- (void)request:(id)a0 method:(id)a1 headers:(id)a2 extraData:(id)a3 body:(id)a4 timeout:(double)a5 callback:(id /* block */)a6;
- (void)download:(id)a0 headers:(id)a1 destPath:(id)a2 callback:(id /* block */)a3;
- (void)cancelAllDownload;
- (void)initRequestSmugglingWithSetupInfo:(id)a0;
- (void)storeTask:(id)a0 task:(id)a1;
- (void)reportRSWithCode:(int)a0;
- (void)smuggleParamsWithBusiness:(id)a0 Aid:(id)a1 Result:(id *)a2;
- (void)reportRSWithCode:(int)a0 AndBusiness:(id)a1 AndDuration:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)removeTaskForKey:(id)a0;

@end
