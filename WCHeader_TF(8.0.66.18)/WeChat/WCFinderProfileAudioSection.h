@class WCFinderStreamLoadingState, NSString, MMListenCategoryItem, NSMutableSet, NSMutableArray;

@interface WCFinderProfileAudioSection : NSObject <WCFindeProfileMusicSectionBase>

@property (retain, nonatomic) WCFinderStreamLoadingState *state;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableSet *itemIdSet;
@property (retain, nonatomic) MMListenCategoryItem *category;
@property (nonatomic) long long secType;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasFetchFirstPage;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ requestNext;
@property (copy, nonatomic) id /* block */ onClickItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)rmObserver:(id)a0;
+ (id)categoryItemFromCollectionInfo:(id)a0;

- (id)init;
- (void)requestNextPage;
- (void)addObserver:(id)a0;
- (void)notifyDataChanged;
- (id)displayTitle;
- (id)sectionItems;
- (id)loadingState;
- (void)requestMore:(id /* block */)a0;
- (void).cxx_destruct;

@end
