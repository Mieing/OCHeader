@class TTHttpTask, NSString;

@interface TTAccountSessionTask : NSObject <TTAccountSessionTask>

@property (retain, nonatomic) TTHttpTask *task;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)cancel;

@end
