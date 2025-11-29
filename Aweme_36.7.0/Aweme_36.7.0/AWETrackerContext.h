@class NSDictionary;

@interface AWETrackerContext : NSObject <NSCopying> {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlock;
}

@property (retain, nonatomic) NSDictionary *log;

- (void)addLog:(id)a0;
- (void)search_addLogWithBuilder:(id /* block */)a0;
- (void)search_addExclusiveLogWithBuilder:(id /* block */)a0;
- (void)addExclusiveLog:(id)a0;
- (id)search_exportLogWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
