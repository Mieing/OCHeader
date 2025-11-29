@class NSMutableArray, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMGroupDeleteMemberListViewController : AWEIMGroupMemberListViewController

@property (retain, nonatomic) NSMutableArray *selectedArrayM;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;

- (void)updateMultiselectCount:(long long)a0;
- (BOOL)shouldShowLiveFansSubscriptionDate;
- (void)deleteMember;
- (void)__trackDeleteMemberWithUserIDArray:(id)a0 blockListOn:(BOOL)a1 shouldBlock:(BOOL)a2;
- (void)updateNaviTitle;
- (BOOL)canShowGroupOwner;
- (BOOL)canShowGroupAdmin;
- (BOOL)isMultiselectMode;
- (BOOL)canShowSortingSwitch;
- (BOOL)shouldAssignDefaultSortingType;
- (BOOL)canShowInactiveEntry;
- (BOOL)isSelectedWithModel:(id)a0;
- (void)didSelectListModel:(id)a0 indexPath:(id)a1;
- (void)p_didTapDelete;
- (void)p_updateCollectionView;
- (id)p_deleteParticipants:(id)a0 participantsOptions:(id)a1 bots:(id)a2;
- (id)p_deleteParticipants:(id)a0 options:(id)a1;
- (id)p_deleteBots:(id)a0;
- (BOOL)p_enableDeleteRember;
- (long long)tagCountLimit;
- (BOOL)shouldShowFansTags;
- (BOOL)shouldEnableEnterProfileWhileAvatarTap;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
