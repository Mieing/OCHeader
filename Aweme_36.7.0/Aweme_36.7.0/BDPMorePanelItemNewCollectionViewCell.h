@class BDPMorePanelItem, NSString, UIImageView, UILabel, UIView, BDPUniqueID;

@interface BDPMorePanelItemNewCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) long long indexPathItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPMorePanelItem *itemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })iconSize;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)setupUniqueID:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
