@class NSString;

@interface WCCoinCloseAuthLogic : NSObject <WCActionSheetDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start:(id /* block */)a0;
- (void)haveBalance;
- (void)closeAuth;
- (void)fail;
- (void)success;
- (id)getTopVC;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onCloseService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
