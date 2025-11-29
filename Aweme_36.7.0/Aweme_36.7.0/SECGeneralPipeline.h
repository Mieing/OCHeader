@class NSArray, SECLogTools, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SECGeneralPipeline : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy, nonatomic) NSArray *workers;
@property (retain, nonatomic) SECLogTools *logger;
@property (copy, nonatomic) NSString *space;

- (void)runWithEvent:(id)a0;
- (id)initWithWorkers:(id)a0 withSpace:(id)a1;
- (void)_asyncRunWithEvent:(id)a0;
- (void)runClassifyTask:(id)a0 withEvent:(id)a1;
- (id)runDataProcess:(id)a0 withEvent:(id)a1;
- (void)runDataConsume:(id)a0 withExtra:(id)a1;
- (void).cxx_destruct;

@end
