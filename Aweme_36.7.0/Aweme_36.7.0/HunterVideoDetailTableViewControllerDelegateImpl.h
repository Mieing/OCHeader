@class NSString, HunterBaseElement;

@interface HunterVideoDetailTableViewControllerDelegateImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate>

@property (retain, nonatomic) HunterBaseElement *hunterElement;
@property (copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerDidScroll:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToPreviousItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToNextItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewController:(id)a0 didPauseDisplayingCellWithCurrentPlayingTime:(double)a1;
- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewController:(id)a0 refreshFooterDidShowAtIndex:(long long)a1;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (id)initWithHunterElement:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
