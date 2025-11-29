@class WCFinderStreamLoadingState, NSString, NSData, NSMutableArray;

@interface WCFinderStreamProfileMusicPlaylist : WCFinderMusicPlayListSection <WCFindeProfileMusicSectionBase>

@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSMutableArray *mutCategoryItems;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) WCFinderStreamLoadingState *state;
@property (copy, nonatomic) id /* block */ fillRequestBlock;
@property (copy, nonatomic) id /* block */ fillFromResponseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllObserver:(id)a0;

- (id)init;
- (void)requestNextPage;
- (void)appendCategoryList:(id)a0;
- (id)categoryItems;
- (void)setItems:(id)a0;
- (id)items;
- (void)registerKeyExtension:(id)a0;
- (id)sectionItems;
- (id)displayTitle;
- (id)loadingState;
- (id)finderUsername;
- (void)requestMore:(id /* block */)a0;
- (void).cxx_destruct;

@end
