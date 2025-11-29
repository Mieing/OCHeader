@class NSString, NSDictionary;

@interface OMJTaskTrace : NSObject {
    NSDictionary *_entriesByID;
}

@property (nonatomic) struct shared_ptr<XMJTaskTrace> { struct XMJTaskTrace *__ptr_; struct __shared_weak_count *__cntrl_; } backingTrace;
@property (readonly, nonatomic) NSString *name;

- (id)initWithBackingTrace:(const void *)a0;
- (void)setupEntries;
- (id)runningLeafEntries;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
