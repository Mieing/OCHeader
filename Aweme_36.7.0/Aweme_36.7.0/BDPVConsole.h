@class NSString, BDPVConsoleButton, UIView, BDPUniqueID, BDPVConsoleWebView;

@interface BDPVConsole : NSObject <BDPBootLifeCycleMessage>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPVConsoleWebView *vConsole;
@property (retain, nonatomic) BDPVConsoleButton *vConsoleButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)showVConsoleButtonIfNeed:(id)a0;
- (void)hideVConsoleButton;
- (void)vConsoleAction;
- (void)updateConstraint;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
