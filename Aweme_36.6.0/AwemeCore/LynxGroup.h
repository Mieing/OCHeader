@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface LynxGroup : NSObject {
    int _numberId;
    NSMutableArray *_viewList;
}

@property (retain, nonatomic) NSMutableDictionary *config;
@property (readonly, nonatomic) struct shared_ptr<lynx::tasm::WhiteBoard> { struct WhiteBoard *__ptr_; struct __shared_weak_count *__cntrl_; } whiteBoard;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *identification;
@property (readonly, nonatomic) NSArray *preloadJSPaths;
@property (readonly, nonatomic) BOOL useProviderJsEnv;
@property (readonly, nonatomic) BOOL enableCanvas;
@property (nonatomic) BOOL enableJSGroupThread;

+ (id)singleGroupTag;
+ (id)jsThreadNameForLynxGroupOrDefault:(id)a0;
+ (id)groupNameForLynxGroupOrDefault:(id)a0;

- (id)initWithName:(id)a0 withPreloadScript:(id)a1 useProviderJsEnv:(BOOL)a2 enableCanvas:(BOOL)a3;
- (id)initWithName:(id)a0 withLynxGroupOption:(id)a1;
- (id)initWithName:(id)a0 withPreloadScript:(id)a1 useProviderJsEnv:(BOOL)a2 enableCanvas:(BOOL)a3 enableCanvasOptimization:(BOOL)a4;
- (id)initWithName:(id)a0 withPreloadScript:(id)a1;
- (void)addLynxView:(id)a0;
- (id)getStringConfig:(id)a0;
- (BOOL)getBoolConfig:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithName:(id)a0;

@end
