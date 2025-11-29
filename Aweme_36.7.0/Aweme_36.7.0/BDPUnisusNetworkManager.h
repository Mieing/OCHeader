@class NSMutableDictionary, BDPODRPluginFileDownloader, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDPUnisusNetworkManager : NSObject <UnisusNetworkServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (nonatomic) long long currentTaskId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceSerialQueue;
@property (retain, nonatomic) BDPODRPluginFileDownloader *fileDownloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (long long)generateTaskId;
- (unsigned long long)getTagType:(int)a0;
- (unsigned long long)getEngineType:(int)a0;
- (long long)request:(id)a0 withListener:(id)a1;
- (long long)downloadData:(id)a0 withListener:(id)a1;
- (long long)downloadFile:(id)a0 withListener:(id)a1;
- (long long)downloadODRData:(id)a0 params:(id)a1 withListener:(id)a2;
- (long long)getMethodType:(int)a0;
- (id)getMetric:(id)a0;
- (void)addTask:(id)a0 withTaskId:(long long)a1;
- (void)cancelTask:(long long)a0;
- (void)removeTask:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
