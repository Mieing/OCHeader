@class NSArray, MJSegmentViewModel, MJPageItem;

@interface MJComposingPagePanelViewModel : MJComposingPanelViewModel

@property (retain, nonatomic) NSArray *pageItems;
@property (nonatomic) long long selectedTabIndex;
@property (nonatomic) unsigned long long selectedTab;
@property (retain, nonatomic) MJPageItem *selectedPageItem;
@property (retain, nonatomic) MJSegmentViewModel *entranceSegmentVM;

- (id)initWithPanelType:(unsigned long long)a0 respondsToQuickExit:(BOOL)a1 pageItems:(id)a2 selectedTabIndex:(long long)a3;
- (BOOL)selectTabWithIndex:(long long)a0;
- (long long)itemIndexWithEditContentType:(unsigned long long)a0;
- (long long)itemIndexWithSupportedSegmentType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
