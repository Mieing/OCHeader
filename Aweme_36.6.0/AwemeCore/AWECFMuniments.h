@class AWECFFracas, NSArray, NSString, NSError, NSMutableArray;

@interface AWECFMuniments : NSObject <AWECFDaffodil>

@property (retain, nonatomic) id task;
@property (retain, nonatomic) AWECFFracas *request;
@property (retain, nonatomic) NSArray *moduleResponseList;
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
