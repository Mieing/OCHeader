@class NSLock, NSMutableArray;

@interface TMHookManager : NSObject

@property (retain, nonatomic) NSMutableArray *hookList;
@property (retain, nonatomic) NSLock *hookListLock;
@property (retain) NSMutableArray *enabledHookTypes;
@property (retain) NSMutableArray *disabledHookTypes;
@property unsigned long long apiTotalNum;
@property (retain) NSMutableArray *hasPerformedHookList;

+ (unsigned long long)apiTotalNum;
+ (id)enabledHookTypes;
+ (id)hookHasPerformed;
+ (id)disabledHookTypes;
+ (void)recordHookeHasPerformed:(id)a0;
+ (id)__timonHookClassNameArray;
+ (id)sharedManager;

- (void)recordAPITotalNum;
- (id)hookHasPerformed;
- (void)hookSensitiveAPI;
- (void)recordHookeHasPerformed:(id)a0;
- (void)setupHookList;
- (void)beginSyncHook;
- (void)beginAsyncHook;
- (void)recordEnabledHook:(id)a0;
- (void)recordDisabledHook:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
