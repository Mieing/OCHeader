@class NSString;

@interface AWEVideoScreenRecordingBlocker : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id object;
@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic) BOOL hasKey;

+ (BOOL)object:(Class)a0 hasKey:(id)a1;

- (void)didReceiveStartRecordingScreen;
- (id)initWithRelatedObject:(id)a0 keyPath:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
