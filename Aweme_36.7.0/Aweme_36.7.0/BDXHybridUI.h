@protocol BDXHybridUIEventDispatcher, BDXHybridUIContext;

@interface BDXHybridUI : NSObject

@property (weak, nonatomic) id<BDXHybridUIEventDispatcher> eventDispatcher;
@property (weak, nonatomic) id<BDXHybridUIContext> context;

+ (id)tagName;

- (void)layoutDidFinished;
- (void)updateAttribute:(id)a0 value:(id)a1 requestReset:(BOOL)a2;
- (void).cxx_destruct;
- (id)view;
- (id)createView;

@end
