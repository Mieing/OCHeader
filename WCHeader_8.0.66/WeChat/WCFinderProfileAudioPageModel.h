@class WCFinderStreamLoadingState, NSString, NSArray, FinderLiteAppParam;
@protocol WCFinderProfileAudioPageModelDelegate;

@interface WCFinderProfileAudioPageModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) NSString *username;
@property (weak, nonatomic) id<WCFinderProfileAudioPageModelDelegate> delegate;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) WCFinderStreamLoadingState *state;
@property (retain, nonatomic) FinderLiteAppParam *postAudioLiteAppParams;
@property (retain, nonatomic) FinderLiteAppParam *manageAudioLiteAppParams;

+ (BOOL)shouldDisplay:(id)a0;
+ (int)tabId;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (void)onClickAudio:(id)a0 section:(id)a1 username:(id)a2 postLiteAppParams:(id)a3 navController:(id)a4;
+ (void)onClickAudio:(id)a0 section:(id)a1 scene:(int)a2 username:(id)a3 postLiteAppParams:(id)a4 navController:(id)a5;

- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)updateOverviewSection:(id)a0 withAudioSection:(id)a1 fillCacheItem:(BOOL)a2;
- (id)init;
- (void)requestPageData;
- (void)reloadPage;
- (void)requestNextPage;
- (void)_requestPageData;
- (void)bindSDKReport:(id)a0 forAudio:(id)a1 tabName:(id)a2;
- (void)bindSDKReport:(id)a0 forAudiOCollection:(id)a1;
- (void)onClickAudio:(id)a0 section:(id)a1 postLiteAppParams:(id)a2 navController:(id)a3;
- (void)onClickAudioCollection:(id)a0;
- (id)reportParamsBlock;
- (void)correctionCollectionCount:(long long)a0;
- (void).cxx_destruct;

@end
