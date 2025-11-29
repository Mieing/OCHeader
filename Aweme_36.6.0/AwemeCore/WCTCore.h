@interface WCTCore : NSObject {
    struct shared_ptr<WCDB::CoreBase> { struct CoreBase *__ptr_; struct __shared_weak_count *__cntrl_; } _core;
}

@property (nonatomic) unsigned long long begin;
@property (nonatomic) BOOL enableTrack;

- (id)initWithCore:(const void *)a0;
- (void)trackIfNeededWithType:(unsigned long long)a0 sql:(const void *)a1 status:(BOOL)a2;
- (void)trackWithType:(unsigned long long)a0 sql:(const void *)a1 status:(BOOL)a2 cost:(double)a3;
- (void).cxx_destruct;
- (id)fileName;
- (int)tag;
- (id).cxx_construct;
- (id)path;

@end
