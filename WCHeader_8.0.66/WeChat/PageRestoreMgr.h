@class MemoryMappedKV, NSString, NSDictionary;

@interface PageRestoreMgr : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) PageRestoreMgr *shared;

@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (retain, nonatomic) NSDictionary *handlers;
@property (nonatomic) long long recoverTime;
@property (nonatomic) long long displayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setupHandlers;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (BOOL)isEnabled;
- (void)checkPageAfterLaunch:(id)a0;
- (void)showSnackBar:(id)a0 message:(id)a1 actionHandler:(id /* block */)a2 willAppearHandler:(id /* block */)a3;
- (void)pushPage:(id)a0;
- (void)popPage:(int)a0;
- (id)lastPage;
- (void).cxx_destruct;

@end
