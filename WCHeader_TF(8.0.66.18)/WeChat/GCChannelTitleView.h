@class NSString, UICollectionView, NSMutableArray, GCCollectionViewManager;
@protocol GCChannelTitleDelegate;

@interface GCChannelTitleView : UIView <GCClvManagerProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) GCCollectionViewManager *collectionViewManager;
@property (retain, nonatomic) NSMutableArray *titleArray;
@property (nonatomic) unsigned long long selectIndex;
@property (weak, nonatomic) id<GCChannelTitleDelegate> channelTitleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithTitleArray:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)selectIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
