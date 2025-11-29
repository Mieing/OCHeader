@class NSString, AWEPublishUserDeclarationCell;

@interface AWEPostPageUserDeclarationElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol>

@property (retain, nonatomic) AWEPublishUserDeclarationCell *tableViewCell;
@property (nonatomic) BOOL hasShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (long long)registerScene:(id)a0;
+ (Class)aAWEStudioPostPageSettingsAdapterClass;
+ (id)type;

- (void)setupCell:(id)a0;
- (BOOL)forceReceiveEvents;
- (id)advanceSettingsPopupItemConfig;
- (BOOL)shouldEnableUserDeclaration;
- (void)p_didSelectWithFromRemindAdd:(BOOL)a0;
- (BOOL)enableCellReminder;
- (void)trackUserDeclarationElementWithAction:(id)a0;
- (id)userDeclarationScene;
- (id)userDeclarationIndicatorText;
- (id)aAWEStudioPostPageSettingsAdapter;
- (void)refreshCell;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cell;
- (void)didSelect;

@end
