@class MMTimer, NSMutableDictionary, NSString, ContactsDataLogic;

@interface WCStoryEntranceVM : NSObject <ContactsDataLogicDelegate, IWCMyStoryUserStateUtilExt, WCStoryFacadeExt>

@property (retain, nonatomic) ContactsDataLogic *dataLogic;
@property (retain, nonatomic) NSMutableDictionary *userContactDict;
@property (retain, nonatomic) MMTimer *reloadNotifyThrottle;
@property (nonatomic) BOOL shouldShowStoryEntrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entranceViewModel;
+ (BOOL)hasUnreadStory;

- (id)init;
- (void)notifyReloadEntrance;
- (void)sendReloadNotify;
- (void)reloadShouldShowStoryEntrace;
- (id)getStoryUnreadUserNameArray;
- (id)getTimestampUnreadUserNameArray;
- (void)onSetUnreadStoryMarkWithUserName:(id)a0;
- (void)onClearUnreadStoryMarkWithUserName:(id)a0;
- (void)userDeleteStoryWithUserName:(id)a0;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)onSetNewLastReadMaxTid;
- (void)onContactHasChange;
- (void)onMarkStoryReadWithUserName:(id)a0 Tid:(id)a1;
- (void)updateUnreadStatus;
- (void)onRelatedCommentDel:(id)a0;
- (void)onRelatedCommentAdd:(id)a0;
- (void)onMakeAllUserRelatedCommentWithUsername:(id)a0;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onUserRelatedCommentReadWithTid:(id)a0;
- (void)onPermissionsHasChanged;
- (void).cxx_destruct;

@end
