@class NSString, AWEProfileHeaderSectionProviderManager, AWEProfileHeaderContext, NSMutableArray;

@interface AWEProfileHeaderViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEProfileHeaderSectionProviderManager *sectionProviderManager;
@property (nonatomic) double lastOffset;
@property (retain, nonatomic) NSMutableArray *binds;
@property (nonatomic) double heightCache;
@property (nonatomic) double screenWidthCache;
@property (nonatomic) double heightAboveTopCornerSeparatorCache;
@property (readonly, copy, nonatomic) NSString *liveHomePageRefer;

- (void)dealloc;
- (void)configWithContext:(id)a0;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (id)padService;
- (double)heightOfListView;
- (double)heightAboveTopCornerSeparatorOfListView;
- (void)sendMsgBtnClickFromTopButton;
- (void)relationBtnClickWithTag:(long long)a0;
- (void)checkAndRequestGuideLunaMusicianInfo;
- (id)sectionViewModelWithType:(long long)a0;
- (void)p_setUpBind;
- (double)p_sumOfSectionsHeight;
- (long long)__lastShowSectionType;
- (double)p_sumOfSectionsHeightAboveTopCornerSeparator;
- (double)heightOfBGCorner;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (void)reloadSections;
- (void)updateSections:(BOOL)a0;
- (double)containerWidth;

@end
