@class NSString, DUXContentSheet;

@interface AWEAccountForceUpgradeManager : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) DUXContentSheet *sheet;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (BOOL)shouldShowUpgradeAPPPanel;
+ (id)sharedInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)clickCancelButton;
- (id)aAFDServiceDOUYINDSAdapter;
- (void)trackPanelShow;
- (void)trackPanelClickWithClickType:(id)a0;
- (void)showUpgradeAPPPanelWithMessage:(id)a0;
- (void)clickUpgradeButton;
- (void)showUpgradeAPPPanelWithMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;

@end
