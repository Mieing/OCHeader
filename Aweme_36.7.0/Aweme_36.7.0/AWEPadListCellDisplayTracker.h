@class NSString, IGListAdapter, AWEPadBaseListSectionController, NSHashTable;

@interface AWEPadListCellDisplayTracker : NSObject <IGListAdapterUpdateListener>

@property (weak, nonatomic) IGListAdapter *listAdpter;
@property (retain, nonatomic) NSHashTable *displayingCells;
@property (retain, nonatomic) NSHashTable *displayingCellDiffIdentifiers;
@property (retain, nonatomic) NSHashTable *displayedCellDiffIdentifiers;
@property (nonatomic) BOOL lastDisplayBanner;
@property (weak, nonatomic) AWEPadBaseListSectionController *triptychBannerSectionController;
@property (nonatomic) double bannerHeight;
@property (nonatomic) BOOL needTrack;
@property (nonatomic) BOOL needClear;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListAdapter:(id)a0;
- (void)setNeedTrack;
- (void)allEndDisplay;
- (void)addRunLoopObserver;
- (void)trackDisplayIfNeed;
- (void)listAdapter:(id)a0 didFinishUpdate:(long long)a1 animated:(BOOL)a2;
- (void)setNeedClear;
- (void)trackBannerDisplayWithOffset:(double)a0 fromReload:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
