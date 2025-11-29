@class NSString, NSMutableArray;

@interface WAPreGetLaunchLogic : NSObject <WAPermissionMgrExtension>

@property (retain, nonatomic) NSMutableArray *arrFetchingCmds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)doPreGetLaunchCmd:(id)a0;
- (void)markFetchingCmd:(id)a0;
- (void)unMarkFetchingCmd:(id)a0;
- (BOOL)isFetchingAppid:(id)a0 username:(id)a1;
- (void)unMarkFetchingAppid:(id)a0 username:(id)a1;
- (id)getFetchingCmdForAppid:(id)a0 username:(id)a1;
- (void)onGetLaunchPermissionInfo:(id)a0 isSuccess:(BOOL)a1 errorCode:(int)a2;
- (void).cxx_destruct;

@end
