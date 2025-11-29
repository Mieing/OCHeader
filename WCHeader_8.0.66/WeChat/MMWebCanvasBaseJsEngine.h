@class MMWebJsBasePkgInfo, MMCanvasMainJSContext, NSMutableDictionary, NSString, JSVirtualMachine;

@interface MMWebCanvasBaseJsEngine : MMObject

@property (retain, nonatomic) JSVirtualMachine *jsVM;
@property (retain, nonatomic) MMCanvasMainJSContext *mainContext;
@property (retain, nonatomic) MMWebJsBasePkgInfo *basePkgInfo;
@property (retain, nonatomic) MMWebJsBasePkgInfo *bizPkgInfo;
@property (retain, nonatomic) NSMutableDictionary *dicJSContexts;
@property (copy) NSString *systemInfoJsonStr;

- (id)initWithBasePkgInfo:(id)a0 bizPkgInfo:(id)a1;
- (void)setupContext:(id)a0 metaInfo:(id)a1;
- (void)dispatchEvent:(id)a0 eventInfo:(id)a1;
- (void)dispatchCallback:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
