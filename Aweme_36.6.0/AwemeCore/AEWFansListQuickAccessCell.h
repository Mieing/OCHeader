@class NSDictionary, AWEConcernFansListQuickAreaView;

@interface AEWFansListQuickAccessCell : UICollectionViewCell

@property (retain, nonatomic) AWEConcernFansListQuickAreaView *quickAreaView;
@property (retain, nonatomic) NSDictionary *quickAccessInfo;
@property (copy, nonatomic) id /* block */ lynxViewSizeChanged;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
