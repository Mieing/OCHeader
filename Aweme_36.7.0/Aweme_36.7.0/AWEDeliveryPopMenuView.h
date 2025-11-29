@class UIViewController, NSArray, UICollectionView, UIImageView, UIView, NSString, UITableView;

@interface AWEDeliveryPopMenuView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectInTargetView;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UITableView *contarinerListView;
@property (weak, nonatomic) UIViewController *showVC;
@property (retain, nonatomic) UICollectionView *popCollectionView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) struct CGSize { double width; double height; } menuSize;
@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ onClickItem;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMenu;

- (void)showWithAnimation;
- (void)dismissWithAnimation;
- (void)dismissWithNotification;
- (void)showWithItems:(id)a0 byView:(id)a1 byRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contarinerListView:(id)a3;
- (void)startToShowPopMenu;
- (void)setupViewFrame;
- (id)vcForShowView;
- (void)initialPopMenuFrame;
- (void)adjustPopMenuPosition;
- (id)downArrowImage;
- (id)upArrowImage;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
