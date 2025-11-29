@class NSString, NSMutableDictionary;

@interface AFDUserActionManager : NSObject <AFDUserActionManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *actionsStacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addPermissionUserActionWithLevel:(long long)a0 aweme:(id)a1 info:(id)a2;
- (void)addUserAction:(id)a0;
- (void).cxx_destruct;

@end
