@class NSMutableArray;

@interface KindaAppModuleManager : NSObject {
    NSMutableArray *moduleList;
}

- (id)init;
- (void)registerModule:(id)a0;
- (void)initAllModule;
- (void)onAppCreate;
- (void).cxx_destruct;

@end
