@class NSMutableDictionary, NSArray, AWEPackResponse, AWEPackContext, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPackFilterAssembleTask : NSObject

@property (retain, nonatomic) AWEPackResponse *response;
@property (retain, nonatomic) NSMutableDictionary *filterCosts;
@property (retain, nonatomic) NSMutableDictionary *assembleCosts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEPackContext *context;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *assemblers;

- (void)executeSerially;
- (void)executeInParallel;
- (id)assemble:(id)a0 filterReason:(out id *)a1 filterCosts:(id)a2 assembleCosts:(id)a3;
- (void)collectFilterCosts:(id)a0 assembleCosts:(id)a1;
- (void).cxx_destruct;
- (void)execute;
- (id)init;

@end
