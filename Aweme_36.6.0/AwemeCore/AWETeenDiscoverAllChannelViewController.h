@class UIView, NSString, NSArray, AWETeenDiscoverGradientView, UIControl, UIButton, UICollectionView, UILabel;

@interface AWETeenDiscoverAllChannelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWETeenDiscoverGradientView *topGradientView;
@property (retain, nonatomic) UIControl *backView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *foldButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *channels;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) double contentHeight;
@property (nonatomic) double channelColumnCount;
@property (copy, nonatomic) id /* block */ clickChannelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)p_setupSubviews;
- (void)p_rotated:(id)a0;
- (void)p_calculateContentHeight;
- (id)initWithChannels:(id)a0 selectedIndex:(long long)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)closeAction;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (double)cellWidth;

@end
