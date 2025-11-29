@class NSDictionary, MMKV, NSString;

@interface AWEUGAlertControlManager : NSObject <AWEUGAlertControlManagerProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSDictionary *alertTypeTaskMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (id)sharedManager;

- (BOOL)shouldTriggerWithAlertType:(id)a0 config:(id)a1;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (void).cxx_destruct;
- (id)init;

@end
