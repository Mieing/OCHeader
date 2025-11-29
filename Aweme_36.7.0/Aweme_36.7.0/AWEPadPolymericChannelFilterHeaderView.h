@class NSString, NSMutableArray;

@interface AWEPadPolymericChannelFilterHeaderView : UICollectionReusableView <AWEPadCollectionReusableViewLayoutProtocol>

@property (retain, nonatomic) NSMutableArray *filterBarArray;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)updateForBreakPoint;
- (void)addFilterTabWithFilterValueArray:(id)a0 filterKey:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
