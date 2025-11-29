@class NSString, NSMutableSet;
@protocol BDPCDBizUITrackerDelegate, BDPCDBizUITrackerMessageShowDelegate;

@interface BDPCDBizUITracker : NSObject <UITableViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id originalDelegate;
@property (retain, nonatomic) NSMutableSet *displayedMsgSet;
@property (weak, nonatomic) id<BDPCDBizUITrackerDelegate> delegate;
@property (weak, nonatomic) id<BDPCDBizUITrackerMessageShowDelegate> msgShowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackMessageDisplayForCell:(id)a0 indexPath:(id)a1;
- (id)initWithOriginalDelegate:(id)a0;
- (BOOL)hasTrackedMessageShow:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
