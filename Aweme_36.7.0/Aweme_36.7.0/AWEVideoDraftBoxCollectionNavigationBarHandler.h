@class UIButton, AWEVideoDraftBoxCollectionViewController, AWEVideoDraftBoxCollectionDataSource;
@protocol AWEVideoDraftBoxCollectionNavigationBarDelegate;

@interface AWEVideoDraftBoxCollectionNavigationBarHandler : NSObject

@property (weak, nonatomic) AWEVideoDraftBoxCollectionDataSource *dataSource;
@property (weak, nonatomic) AWEVideoDraftBoxCollectionViewController *vc;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *chooseAllButton;
@property (retain, nonatomic) UIButton *manageButton;
@property (nonatomic) long long selectedCount;
@property (nonatomic) long long totalCount;
@property (weak, nonatomic) id<AWEVideoDraftBoxCollectionNavigationBarDelegate> delegate;

- (void)backAction:(id)a0;
- (id)initWithDraftVC:(id)a0 dataSource:(id)a1;
- (void)setupNavigationBarWithEditing:(BOOL)a0;
- (void)setupTitleWithEditing:(BOOL)a0;
- (void)setupLeftButtonWithEditing:(BOOL)a0;
- (void)setupRightButtonWithEditing:(BOOL)a0;
- (void)chooseAllAction:(id)a0;
- (id)p_navCloseButtonPresetStyle;
- (void)manageAction:(id)a0;
- (void)p_trackDraftBoxViewEventWithDraftCount:(long long)a0;
- (void)updateRightButtonHidden:(BOOL)a0;
- (void)updateRightButtonEnabled:(BOOL)a0;
- (void)updateNavigationBarWithSelectedCount:(long long)a0 totalCount:(long long)a1;
- (void).cxx_destruct;

@end
