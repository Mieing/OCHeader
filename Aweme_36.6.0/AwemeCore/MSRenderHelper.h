@interface MSRenderHelper : NSObject

@property (nonatomic) void *key;

+ (id)renderWithKey:(void *)a0;

- (void)handleBecomeActiveNotification:(id)a0;
- (void)dealloc;
- (id)initWithKey:(void *)a0;

@end
