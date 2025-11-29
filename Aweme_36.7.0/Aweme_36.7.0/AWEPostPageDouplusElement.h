@class AWEPublishOutsideDouplusCell, BDXBridgeEventSubscriber, NSString;

@interface AWEPostPageDouplusElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol>

@property (nonatomic) long long showType;
@property (retain, nonatomic) AWEPublishOutsideDouplusCell *outsideCell;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) double lastClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (id)type;

- (id)publishViewModel;
- (id)douplusDraftID;
- (void)trackWithEventName:(id)a0;
- (void)subscribeFEEvent;
- (void)setupCell:(id)a0;
- (id)advanceSettingsPopupItemConfig;
- (void)saveDouplusDraftID:(id)a0;
- (id)douplusCommonParams;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)cellClass;
- (id)cell;
- (id)cellIdentifier;
- (id)warningText;
- (void)didSelect;

@end
