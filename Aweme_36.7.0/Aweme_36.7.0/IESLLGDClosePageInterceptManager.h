@class NSString, NSMutableArray;

@interface IESLLGDClosePageInterceptManager : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) NSMutableArray *controllerList;

- (void)initCloseInterceptLifeStorageWithSessionID;
- (id)getFirstInterceptor;
- (id)getDomainKeyBySession;
- (void)handleComponentListChange:(id)a0;
- (void)addInterceptorControl:(id)a0;
- (void)destroyCloseInterceptLifeStorage;
- (BOOL)shouldInterceptGDPageClose;
- (void)onGDPageClose;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0;

@end
