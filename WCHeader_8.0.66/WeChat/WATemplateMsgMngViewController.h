@class NSString;

@interface WATemplateMsgMngViewController : ZZFLEXTableViewController <WATemplateMsgManagerExt>

@property (nonatomic) unsigned long long notifyStatus;
@property (nonatomic) unsigned long long audioNotifyStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtension;
- (void)viewDidLoad;
- (void)reloadSwitchData;
- (void)viewDidBePoped:(BOOL)a0;
- (void)reloadTableView;
- (void)onNotifySwitch:(BOOL)a0;
- (void)onAudioNotifySwitch:(BOOL)a0;
- (void)onTemplateMsgMgrInfoChanged;

@end
