@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject

@property (retain, nonatomic) NSMapTable *visibleViewObjectMap;
@property (readonly, nonatomic) NSCountedSet *visibleListSections;

- (void)willDisplayCell:(id)a0 forListAdapter:(id)a1 sectionController:(id)a2 object:(id)a3 indexPath:(id)a4;
- (void)didEndDisplayingCell:(id)a0 forListAdapter:(id)a1 sectionController:(id)a2 indexPath:(id)a3;
- (void)willDisplaySupplementaryView:(id)a0 forListAdapter:(id)a1 sectionController:(id)a2 object:(id)a3 indexPath:(id)a4;
- (void)didEndDisplayingSupplementaryView:(id)a0 forListAdapter:(id)a1 sectionController:(id)a2 indexPath:(id)a3;
- (void)_willDisplayReusableView:(id)a0 forListAdapter:(id)a1 sectionController:(id)a2 object:(id)a3 indexPath:(id)a4;
- (id)_pluckObjectForView:(id)a0;
- (void)_didEndDisplayingReusableView:(id)a0 forListAdapter:(id)a1 sectionController:(id)a2 object:(id)a3 indexPath:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
