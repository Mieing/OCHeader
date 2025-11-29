@class UITableViewHeaderFooterView, NSMutableDictionary, AWESiriShowCutModel, NSString, NSMutableArray, UITableView;

@interface AWESiriShowcutViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, INUIAddVoiceShortcutViewControllerDelegate, INUIEditVoiceShortcutViewControllerDelegate>

@property (retain, nonatomic) UITableView *siriShowcutTableView;
@property (retain, nonatomic) NSMutableArray *siriArray;
@property (retain, nonatomic) UITableViewHeaderFooterView *headerView;
@property (retain, nonatomic) NSMutableArray *editShortCutArray;
@property (retain, nonatomic) NSMutableDictionary *addedIntentDictionary;
@property (retain, nonatomic) AWESiriShowCutModel *selectedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCenterIgnoreCommonAdapterClass;

- (void)closeAction:(id)a0;
- (void)handleApplicationDidBecomeActive;
- (id)aAWEUserCenterIgnoreCommonAdapter;
- (BOOL)shouldIgnoreOpenShopping;
- (id)createModelWithTitle:(id)a0 subTilte:(id)a1 phrase:(id)a2 intent:(id)a3 accessibilityText:(id)a4 traceType:(id)a5;
- (void)traceShowEventWithModel:(id)a0;
- (void)eiditSiriShowCut:(id)a0;
- (void)addSiriShowCut:(id)a0;
- (void)traceClickEventWithModel:(id)a0;
- (void)traceResultEventWithModel:(id)a0 actiontype:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)updateData;
- (void)initData;
- (void)editVoiceShortcutViewController:(id)a0 didUpdateVoiceShortcut:(id)a1 error:(id)a2;
- (void)editVoiceShortcutViewController:(id)a0 didDeleteVoiceShortcutWithIdentifier:(id)a1;
- (void)addVoiceShortcutViewControllerDidCancel:(id)a0;
- (void)addVoiceShortcutViewController:(id)a0 didFinishWithVoiceShortcut:(id)a1 error:(id)a2;
- (void)editVoiceShortcutViewControllerDidCancel:(id)a0;
- (void)createUI;

@end
