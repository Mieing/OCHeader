@class AWECoCreatorBaseViewController, AWECoCreatorModel, NSString, AWEAwemeModel, NSMutableArray, NSIndexPath;

@interface AWECoCreatorViewModel : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableArray *coCreatorList;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long displayStyle;
@property (retain, nonatomic) AWECoCreatorModel *fromCoCreatorModel;
@property (nonatomic) BOOL isFromAuthor;
@property (nonatomic) BOOL showFollowerCount;
@property (retain, nonatomic) NSMutableArray *firstSectionList;
@property (retain, nonatomic) NSMutableArray *secondSectionList;
@property (retain, nonatomic) NSIndexPath *lastEnterProfileIndexPath;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL hasLoadMore;
@property (weak, nonatomic) AWECoCreatorBaseViewController *viewController;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referString;
+ (Class)aAWEPadBizUIAdapterClass;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)aAWEPadBizUIAdapter;
- (void)trackFollow:(id)a0;
- (void)trackEnterPersonalDetail:(id)a0;
- (void)followUserWithIndexPath:(id)a0 cell:(id)a1;
- (BOOL)enableLargeCoActivityOptiStyle;
- (void)configureWithAwemeModel:(id)a0 coCreatorModel:(id)a1;
- (void)refreshWithModel:(id)a0 coCreatorModel:(id)a1 completion:(id /* block */)a2;
- (id)cellModelForIndexPath:(id)a0;
- (void)handleMainButtonTapped:(id)a0 cell:(id)a1;
- (void)handleMinorButtonTapped:(id)a0 cell:(id)a1;
- (void)enterUserProfilePageWithModel:(id)a0 coCreatorModel:(id)a1;
- (void)handleCellTapped:(id)a0;
- (BOOL)isHighlightSingleAuthor;
- (void)enterUserChatPageWithIndexPath:(id)a0;
- (void)removeModelForIndexPath:(id)a0;
- (void)enterUserProfilePage:(id)a0 indexPath:(id)a1;
- (void)addAcceptedDetailCellModel;
- (void)addUnacceptedDetailCellModel;
- (BOOL)addInviteDetailCellModel;
- (void)configCellModel;
- (void)configDisplayStyleWithModel:(id)a0 fromCoCreatorModel:(id)a1;
- (void)configCoCreatorList;
- (void)addFromModelDetailCellModel;
- (void)addPostListCellModel;
- (void)addSectionHeaderCellModel;
- (void)configMultiCellModel;
- (void)configNormalCellModel;
- (void)configMultiPostListOtherCellModel;
- (void)commonConfigureCellModel;
- (void)updateCellStyleWithCellModel:(id)a0 coCreatorModel:(id)a1;
- (id)detailCellModelWithIndexPath:(id)a0;
- (void)updateFollowStatusWithUserID:(id)a0 followStatus:(long long)a1;
- (void)trackEnterChat:(id)a0;
- (void)enterUserProfilePageWithModel:(id)a0 enterUserModel:(id)a1;
- (BOOL)exitCurrentVCIfNeededWithTappedUserID:(id)a0;
- (void)updateFollowStatusWithUser:(id)a0 status:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)dealloc;
- (double)cellHeightForIndexPath:(id)a0;

@end
