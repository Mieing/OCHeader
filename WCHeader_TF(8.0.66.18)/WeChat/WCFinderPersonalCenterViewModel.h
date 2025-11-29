@class WCFinderContactPreviewData, NSString, WCFinderDataItem, NSURL, FinderNewUserPrepareResponse, NSMutableArray, WCFinderContact;
@protocol WCFinderPersonalCenterViewModelDelegate;

@interface WCFinderPersonalCenterViewModel : NSObject <WCFinderContactExt, WCFinderSelfContactExt>

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL logoutCacheFlag;
@property (retain, nonatomic) NSMutableArray *otherContacts;
@property (weak, nonatomic) id<WCFinderPersonalCenterViewModelDelegate> delegate;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse;
@property (readonly, nonatomic) BOOL isCreateLivePrepareChecked;
@property (readonly, nonatomic) BOOL accountLogout;
@property (readonly, nonatomic) NSURL *accountLogoutUrl;
@property (retain, nonatomic) WCFinderContactPreviewData *previewData;
@property (copy, nonatomic) NSString *refObjectid;
@property (nonatomic) int refCommentScene;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;
@property (nonatomic) int prepareScene;
@property (retain, nonatomic) NSString *finderPrivateMsgTailText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)canPost;
- (id)unAuthFinderInfo;
- (BOOL)haveFinderContact;
- (BOOL)isContactBlocked;
- (BOOL)isContactSilent;
- (BOOL)isForeignerContact;
- (BOOL)forbidenForeignerFinder;
- (BOOL)showTakePhotoForRealName;
- (id)takePhotoRealNameUrl;
- (unsigned long long)getWechatUnreadMentionCount;
- (unsigned long long)getFinderUnreadMentionCount;
- (unsigned long long)getMemberUnreadMentionCount;
- (void)clearCameraRedPoint;
- (BOOL)isAccountFreezing;
- (void)changeSelectedContact:(id)a0;
- (void)_fetchPreviewData;
- (void)refreshPrivateMsgText;
- (void)cleanPrivateMsgText;
- (void)onFinderContactUpdate:(id)a0;
- (void)reloadContact;
- (void)updateContactFromUserPrepare:(id)a0 prepareFinders:(id)a1;
- (void)refetchUserPrepare:(id /* block */)a0;
- (void)onChangeSelectedFinderUsername:(id)a0;
- (void)finderUserPrepareUpdate:(id)a0;
- (void).cxx_destruct;

@end
