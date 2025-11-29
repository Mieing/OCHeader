@class UIView, MMTableViewInfo, NSString, MMFinderLiveVisivilitySettingInfo, UIButton, MMFinderLiveNewShareSettingSessionSelectController, MMFinderLiveShareSettingInitParams, MMUILabel, UIViewController;
@protocol MMFinderLiveVisivilityShareSettingDelegate;

@interface MMFinderLiveVisivilityShareSettingView : MMPageSheetBaseView <SessionSelectControllerDelegate, WCFinderLiveRosterSelectDelegate, ILinkEventExt, WCMomentsContactTagListViewControllerDelegate>

@property (retain, nonatomic) MMFinderLiveShareSettingInitParams *settingInitParam;
@property (retain, nonatomic) MMFinderLiveVisivilitySettingInfo *settingInfo;
@property (nonatomic) BOOL isShown;
@property (nonatomic) BOOL forceDarkMode;
@property (weak, nonatomic) UIViewController *rootVC;
@property (nonatomic) unsigned int openContactSelectViewScene;
@property (weak, nonatomic) MMFinderLiveNewShareSettingSessionSelectController *shareSettingSessionSelectVC;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (nonatomic) long long closeAction;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *closeLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (weak, nonatomic) id<MMFinderLiveVisivilityShareSettingDelegate> settingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateCellInfoSeperateLine:(id)a0 needDisplay:(BOOL)a1;
+ (id)lowerCellDigestWithContactUsernames:(id)a0 chatroomUsernames:(id)a1 tagNames:(id)a2 fileLists:(id)a3;
+ (id)reportLowerCellDigestWithContactUsernames:(id)a0 chatroomUsernames:(id)a1 fileLists:(id)a2 tagList:(id)a3;
+ (id)lowerCellDigestWithAudienceLists:(id)a0 selectedLists:(id)a1;

- (id)initWithSettingInfo:(id)a0 initParam:(id)a1 forceDarkMode:(BOOL)a2 rootVC:(id)a3;
- (void)initSettingInfo:(id)a0;
- (void)initPageSheetConfig;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (void)layoutConfirmButton;
- (void)layoutSettingTableView;
- (void)reloadTableData;
- (double)contentViewHeight;
- (double)getNavHeaderHeight;
- (double)getContentHeight;
- (double)getSettingTableHeight;
- (void)updateConfirmButtonEnabled;
- (id)navTitle;
- (void)pageSheetDidAppear;
- (void)pageSheetDidCloseWithType:(long long)a0;
- (void)onConfirm;
- (void)onCloseAction;
- (void)updateSettingInfo:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0 action:(long long)a1 completion:(id /* block */)a2;
- (void)customParamWithSelectContactsFromRecentSessions:(unsigned int)a0 selectedContacts:(id)a1 viewController:(id)a2;
- (id)getUniqueSelectedContacts:(id)a0 requiredContacts:(id)a1;
- (void)selectContactsFromRecentSessions:(unsigned int)a0 selectedContacts:(id)a1;
- (void)dismissShareSettingSessionSelectVCAnimated:(BOOL)a0;
- (void)showRosterSelectViewController:(id)a0;
- (void)openAddFromTagWithTagNameSet:(id)a0;
- (void)customParamWithController:(id)a0;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (void)contactTagListViewControllerCancelSelect:(id)a0;
- (void)contactTagListViewController:(id)a0 onSelectDisabledTag:(id)a1;
- (BOOL)sessionSelectControllerHideSelectFromContactList:(id)a0;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (void)onSessionSelectController:(id)a0 prepareMultiSelectContactsViewController:(id)a1;
- (double)heightForSessionSelectControllerChildPageSheet:(id)a0 defaultHeight:(double)a1;
- (void)onWCFinderLiveRosterSelectCancel;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)a0 visibilityMode:(long long)a1 liveMode:(long long)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
