@class NSMutableDictionary, NSMutableSet;

@interface AWEDCFeedTrackerTotalShowController : AWEDCFeedBaseController

@property (retain, nonatomic) NSMutableDictionary *coverImageShowDict;
@property (retain, nonatomic) NSMutableSet *hasShownItemID;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)exitContainerWithModel:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void)trackCardTotalShowIfNeeded;
- (void)trackCardTotalShow:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
