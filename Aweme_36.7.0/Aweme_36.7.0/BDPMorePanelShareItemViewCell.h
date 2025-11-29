@class BDPMorePanelFriendAndContactModel, NSString, UIImageView, UIImage, UILabel, UIView, BDPUniqueID;
@protocol BDPMorePanelShareItemViewCellActionDelegate;

@interface BDPMorePanelShareItemViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) long long indexPathItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *smallImageView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPMorePanelFriendAndContactModel *itemModel;
@property (weak, nonatomic) id<BDPMorePanelShareItemViewCellActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })iconSize;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)sendButtonClickEventWithItem:(id)a0;
- (void)setupUniqueID:(id)a0;
- (void)setSelectedIfNeededWithItem:(id)a0;
- (void)unSelectedCurrentCell;
- (void)setUpSelectedIcon;
- (id)amountOfGroupMembersWithAppendWithName:(id)a0 capacity:(long long)a1;
- (void)setToDefaultIcon;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
