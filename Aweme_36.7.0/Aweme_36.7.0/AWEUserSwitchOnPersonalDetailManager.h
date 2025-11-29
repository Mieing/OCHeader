@class NSString, NSMutableDictionary;

@interface AWEUserSwitchOnPersonalDetailManager : NSObject <AWEUserMessage>

@property (nonatomic) BOOL isInSwitchProduce;
@property (retain, nonatomic) NSMutableDictionary *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)userDetailVCWillBackWithVCHash:(id)a0;
- (void)dismissSwitchAccount;
- (id)vcHashString:(id)a0;
- (id)findUserDetailViewController:(id)a0;
- (void)updateInSwitchProduce:(BOOL)a0;
- (void)showQuickSwitchOnPersonalDetailWithEnterFrom:(id)a0 switchUserComplete:(id /* block */)a1 finishComplete:(id /* block */)a2;
- (void).cxx_destruct;

@end
