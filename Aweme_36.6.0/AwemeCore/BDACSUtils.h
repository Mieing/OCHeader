@class NSObject;
@protocol OS_dispatch_queue;

@interface BDACSUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;

+ (id)rootDirPath;
+ (id)AES128GCMEncryptData:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)AES128GCMDecryptData:(id)a0 key:(id)a1 error:(id *)a2;
+ (void)uploadDirectory:(id)a0 limitSize:(long long)a1 url:(id)a2 success:(id /* block */)a3 failed:(id /* block */)a4;
+ (id)createZipFileAndDeleteDir:(id)a0;
+ (id)getMetricFromStartTime:(double)a0 createZipDoneTime:(double)a1 readZipDoneTime:(double)a2 zipSize:(long long)a3;

@end
