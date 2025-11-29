@class UINavigationController, DUXPartialSheet, NSString;

@interface AWELiveShowPanelProtocolImpl : NSObject <DUXPartialSheetDelegate, IESHYControllerDelegate, IESLiveShowPanelProtocol>

@property (weak, nonatomic) UINavigationController *panelNavigationController;
@property (retain, nonatomic) UINavigationController *payLiveNavigationController;
@property (retain, nonatomic) DUXPartialSheet *payLivePartialSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
