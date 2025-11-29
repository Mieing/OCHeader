@class NSString, AWENearbyCardLiveCell;

@interface AWENearbyLiveFeedSectionController : AWECommonFeedBaseSectionController <IGListScrollDelegate>

@property (nonatomic) BOOL isDisplay;
@property (weak, nonatomic) AWENearbyCardLiveCell *liveCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (void)listAdapter:(id)a0 didEndDeceleratingSectionController:(id)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
