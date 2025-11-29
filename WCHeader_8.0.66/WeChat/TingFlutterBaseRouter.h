@class NSString, TingPlayerManager;

@interface TingFlutterBaseRouter : NSObject <FlutterNavigatorDelegate>

@property (retain, nonatomic) TingPlayerManager *playTaskController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewController:(id)a0;
- (id)createViewController:(id)a0 arguments:(id)a1;
- (void)initPlayTaskController;
- (BOOL)isDisassembled;
- (void)openNewPage:(id)a0 completion:(id /* block */)a1;
- (id)pushNewPageWithRoute:(id)a0 arguments:(id)a1 completioin:(id /* block */)a2;
- (void)pushFromViewController:(id)a0 plugin:(id)a1 route:(id)a2 arguments:(id)a3;
- (void).cxx_destruct;

@end
