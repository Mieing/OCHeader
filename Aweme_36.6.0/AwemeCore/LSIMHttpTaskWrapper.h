@class NSString;
@protocol AWEHttpTask;

@interface LSIMHttpTaskWrapper : NSObject <LSIMHttpTask>

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAWEHttpTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)cancel;

@end
