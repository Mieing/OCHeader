@class NSString, NSNumber, NSArray;

@interface IESLiveCPUMonitor : NSObject

@property (retain, nonatomic) NSString *appUsage;
@property (retain, nonatomic) NSString *sysUsage;
@property (retain, nonatomic) NSNumber *threadCount;
@property (retain, nonatomic) NSArray *threadDetailInfos;

+ (id)threadInfosWithDetail:(BOOL)a0 onlyThread:(id)a1 abandon:(id /* block */)a2 backtrace:(id /* block */)a3;
+ (id)threadsWithNames:(id)a0;
+ (id)allThreadInfos;
+ (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)threadWithName:(id)a0;

- (id)finishThreadInfos;
- (id)cpuInfoWithConfig:(id)a0 backtrace:(BOOL)a1 getStackOfThreads:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
