@class NSMutableArray, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMGroupDeleteInactiveMemberListViewController : AWEIMGroupInactiveMemberListViewController

@property (retain, nonatomic) NSMutableArray *selectedArrayM;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;

- (void)updateMultiselectCount:(long long)a0;
- (void)deleteMember;
- (void)__trackDeleteMemberWithUserIDArray:(id)a0 blockListOn:(BOOL)a1 shouldBlock:(BOOL)a2;
- (void)updateNaviTitle;
- (BOOL)canShowGroupOwner;
- (BOOL)canShowGroupAdmin;
- (BOOL)isMultiselectMode;
- (BOOL)canShowSortingSwitch;
- (BOOL)shouldAssignDefaultSortingType;
- (BOOL)canShowInactiveEntry;
- (BOOL)shouldHideSearchBar;
- (BOOL)isSelectedWithModel:(id)a0;
- (void)didSelectListModel:(id)a0 indexPath:(id)a1;
- (void)p_didTapDelete;
- (void).cxx_destruct;

@end
