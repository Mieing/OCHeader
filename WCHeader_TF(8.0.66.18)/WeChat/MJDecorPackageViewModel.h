@class NSArray, NSString, MJTimelineViewModel, MJPlaybackViewModel;

@interface MJDecorPackageViewModel : NSObject

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *selectedPackageID;
@property (readonly, weak, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, weak, nonatomic) MJPlaybackViewModel *playbackVM;

- (id)initWithTimelineViewModel:(id)a0 playbackViewModel:(id)a1;
- (void)dealloc;
- (void)bindViews;
- (void)unbindViews;
- (void)loadItemsWithCompletion:(id /* block */)a0;
- (id)itemsWithMaterialCategories:(id)a0;
- (id)defaultItems;
- (void)handleSelectItemAtIndexPath:(id)a0;
- (void)asyncLoadDecorPackageItem:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (id)indexPathForItemWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
