@interface AWECommentSwiftService.CommentDataCenter : NSObject <AWECommentDataCenterProtocol> {
    void /* unknown type, empty encoding */ dataCenterConcurrentQueue;
    void /* unknown type, empty encoding */ observersMap;
}

+ (void)addObserverWith:(id)a0;
+ (void)addObserverWith:(id)a0 key:(id)a1 object:(id)a2 handler:(id /* block */)a3;
+ (void)postWithEventKey:(id)a0 info:(id)a1 object:(id)a2;
+ (void)executeWithEventKey:(id)a0 info:(id)a1 object:(id)a2;
+ (void)removeWithObserver:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
