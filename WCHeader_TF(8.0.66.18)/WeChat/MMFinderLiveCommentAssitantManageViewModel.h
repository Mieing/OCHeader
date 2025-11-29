@class WCColorProxy, NSString, NSArray, UINavigationController, NSMutableDictionary, MMUINavigationController, RoomContactSelectViewController, MMFinderLiveTaskId, NSMutableArray, MMFinderLiveCommentAssitantManageView;

@interface MMFinderLiveCommentAssitantManageViewModel : NSObject <MultiSelectContactsViewControllerDelegate, RoomContactSelectDelegate>

@property (retain, nonatomic) NSArray *assistants;
@property (weak, nonatomic) RoomContactSelectViewController *delVC;
@property (retain, nonatomic) WCColorProxy *colorProxy;
@property (retain, nonatomic) NSMutableArray *assistantsToRemove;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *sourceTypeMap;
@property (retain, nonatomic) NSMutableDictionary *liveContactMap;
@property (weak, nonatomic) MMUINavigationController *presentedNavigationVC;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) MMFinderLiveCommentAssitantManageView *manageView;
@property (nonatomic) unsigned long long maxAssistantAllowed;
@property (copy, nonatomic) id /* block */ onRequirePortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (id)currentAssistants;
- (void)tryOpenAssistantRemove;
- (void)tryOpenAssistantSelect;
- (void)showUserProfileWithContact:(id)a0;
- (id)finderLiveContactFromContact:(id)a0;
- (void)_doShowProfileWithContact:(id)a0;
- (void)openStreamProfile:(id)a0;
- (void)gotoChatViewVCWithContact:(id)a0 liveContactExtInfo:(id)a1;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)a0;
- (void)onViewContact:(id)a0;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void)updateRightBtn;
- (void)confirmRemove;
- (id)getCurrentNavigationController;
- (void)requirePortraitThen:(id /* block */)a0;
- (void)getAssistantsFromServer;
- (void)doAddAssistants:(id)a0;
- (void)doRemoveAssistants:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
