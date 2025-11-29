@class NSString;

@interface WCFinderAccountSelectorViewController : WCFinderWCTableViewManagerVC <WCActionSheetDelegate, WCFinderSwitchExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayNicknameForSelectedAccount;

- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)onBuildTables;
- (void)editTrumpetAccount;
- (void)selectedLiveIdentity:(id)a0;
- (void)deleteTrumpetAccount;
- (void)createTrumpetAccount;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)finderLiveIdentityChange;

@end
