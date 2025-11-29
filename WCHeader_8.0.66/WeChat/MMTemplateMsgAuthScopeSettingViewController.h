@class BrandTemplateMsgAuthSettingPageModel, NSString, WATemplateAudioPlayer, MMTemplateMsgScopeItem;

@interface MMTemplateMsgAuthScopeSettingViewController : ZZFLEXTableViewController <WAPageSheetDelegate, MessagePageSheetAdapterDelegate>

@property (retain, nonatomic) WATemplateAudioPlayer *audioPlayer;
@property (retain, nonatomic) MMTemplateMsgScopeItem *scopeItem;
@property (copy, nonatomic) id /* block */ selectedAction;
@property (retain, nonatomic) BrandTemplateMsgAuthSettingPageModel *pageModel;
@property (nonatomic) unsigned int uiType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScopeItem:(id)a0 pageModel:(id)a1 selectedAction:(id /* block */)a2;
- (id)initWithScopeItem:(id)a0 pageModel:(id)a1 uiType:(unsigned int)a2 selectedAction:(id /* block */)a3;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)reloadUI;
- (void)resetScope;
- (void)enterHistoryMsgList;
- (void)showDemoView;
- (void)showAudioAlert;
- (void)playAudio;
- (BOOL)isWeAppUserName;
- (BOOL)isCurrentSceneNeedDataReporter;
- (void)pageSheetWillShow:(id)a0;
- (void)pageSheetWillClose:(id)a0;
- (void)pageSheetWillAppear:(id)a0;
- (void).cxx_destruct;

@end
