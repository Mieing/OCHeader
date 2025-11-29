@class NSArray, AWEUserModel;

@interface AWETeenUserProfileTabHelper : HTSService

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isHomePage;
@property (nonatomic) BOOL shouldRefreshTab;
@property (readonly, nonatomic) long long numOfTab;
@property (readonly, copy, nonatomic) NSArray *tabArray;
@property (readonly, copy, nonatomic) NSArray *tabTitles;
@property (nonatomic) BOOL isOtherLikeLock;

- (long long)tabTypeAtIndex:(long long)a0;
- (BOOL)p_isCurrentUser;
- (long long)indexForVCType:(long long)a0;
- (void)updateUser:(id)a0 shouldRefreshTab:(BOOL)a1;
- (id)tabNameForLog:(long long)a0;
- (id)initWithUser:(id)a0 isHomePage:(BOOL)a1;
- (id)p_likeTabModel;
- (id)p_collectTabModel;
- (id)p_privateTabModel;
- (id)p_titleForLikeTab;
- (id)p_selectedTitleForLikeTab;
- (id)p_titleForCollectTab;
- (id)p_titleForPrivateTab;
- (float)eachTabWidth;
- (void)resetTabTitles;
- (BOOL)shouldShowLocalPhotoLibraryTab;
- (long long)tabTypeWithIndex:(long long)a0;
- (BOOL)p_shouldShowLikeTab;
- (void).cxx_destruct;

@end
