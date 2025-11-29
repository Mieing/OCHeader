@class AWEMessageReachNativeDialogHandler, NSString;
@protocol AWEMessageReachCommonDialogPluginProtocol;

@interface AWEMessageReachDialogPluginAbilityImpl : NSObject <AWEMessageReachCommonDialogAbility>

@property (weak, nonatomic) AWEMessageReachNativeDialogHandler *dialogHandler;
@property (weak, nonatomic) id<AWEMessageReachCommonDialogPluginProtocol> plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageReach_dismissCommonDialogWithAnimated:(BOOL)a0 withCloseType:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)initWithDialogHandler:(id)a0 withPlugin:(id)a1;
- (void).cxx_destruct;

@end
