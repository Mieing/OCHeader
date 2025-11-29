@class UIButton, NSString, ACCBarItem;

@interface AWENewCoverEditToolBarCollectionCell : UICollectionViewCell <ACCBarItemCustomView>

@property (retain, nonatomic) ACCBarItem *barItem;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double alpha;
@property (weak, nonatomic) UIButton *barItemButton;
@property (copy, nonatomic) id /* block */ itemViewDidClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemViewDidClicked:(id)a0;
- (void)configCellWithBarItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
