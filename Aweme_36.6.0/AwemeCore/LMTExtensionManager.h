@class LMTContext, LMTViewController, NSMutableArray;

@interface LMTExtensionManager : NSObject

@property (weak, nonatomic) LMTContext *context;
@property (weak, nonatomic) LMTViewController *vc;
@property (retain, nonatomic) NSMutableArray *extensionArr;

- (void)viewDealloc;
- (id)initWithContext:(id)a0 vc:(id)a1;
- (void)addExtension:(id)a0 customInitializationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
