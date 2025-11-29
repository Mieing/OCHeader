@interface WeChat.LiveSkeletonLayer : NSObject {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ transition;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ layer;

- (void)layout;
- (void)updateWithColor:(id)a0;
- (void)removeWithComplete:(id /* block */)a0;
- (void)insertTo:(id)a0 complete:(id /* block */)a1;
- (void)clean;
- (id)init;
- (void).cxx_destruct;

@end
