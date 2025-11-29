@interface TPConnectionNode : NSObject

@property (nonatomic) void *nativeConnNode;

- (id)init;
- (void)dealloc;
- (BOOL)addAction:(long long)a0;
- (void)removeAction:(long long)a0;
- (BOOL)setLongActionConfig:(long long)a0 cfgType:(long long)a1 cfgValue:(long long)a2;
- (void *)getNativeConnNode;

@end
