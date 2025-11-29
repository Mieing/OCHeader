@class NSString, UICollectionView;

@interface WCFinderStreamHotAreaFlowViewAdapter : NSObject <WCFinderStreamHotAreaAdapter>

@property (retain, nonatomic) UICollectionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listVisiableCells;
- (id)indexPathForCell:(id)a0;
- (void).cxx_destruct;

@end
