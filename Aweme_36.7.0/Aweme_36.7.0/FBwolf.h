@class NSURLSessionTask, NSString, NSError, NSMutableArray;

@interface FBwolf : NSObject <AWECFDaffodil>

@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) id moduleModel;
@property (retain, nonatomic) id dycModule;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *retryTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURLTask:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
