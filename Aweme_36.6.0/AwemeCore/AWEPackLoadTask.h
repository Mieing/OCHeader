@class NSMutableDictionary, NSDictionary, NSMutableSet, NSError, NSObject, AWEPackContext;
@protocol OS_dispatch_queue;

@interface AWEPackLoadTask : NSObject

@property (retain, nonatomic) NSMutableSet *runningLoaders;
@property (retain, nonatomic) NSMutableSet *finishedLoaders;
@property (retain, nonatomic) NSError *coreError;
@property (retain, nonatomic) NSMutableDictionary *errors;
@property (retain, nonatomic) NSMutableDictionary *costs;
@property (nonatomic) BOOL hasFinished;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEPackContext *context;
@property (copy, nonatomic) NSDictionary *loaders;

- (void)executeLoaderIDs:(id)a0;
- (void)finishIfPossible;
- (void)executeLoaderSerially:(id)a0;
- (void)executeLoaderInParallel:(id)a0;
- (BOOL)isCoreLoader:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)init;

@end
