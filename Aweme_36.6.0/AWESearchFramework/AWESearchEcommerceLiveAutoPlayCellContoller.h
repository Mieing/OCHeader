@class AWESearchEcommerceSingleGoodsView, AWESearchEcommerceAnchorModel;
@protocol AWESearchEcommerceLiveAutoPlayCellContollerDelegate;

@interface AWESearchEcommerceLiveAutoPlayCellContoller : AWESearchLiveAutoPlayViewController

@property (retain, nonatomic) AWESearchEcommerceSingleGoodsView *ecommerceView;
@property (retain, nonatomic) AWESearchEcommerceAnchorModel *ecommerceModel;
@property (weak, nonatomic) id<AWESearchEcommerceLiveAutoPlayCellContollerDelegate> delegate;

- (void)setupSubViews;
- (void)onEcommerceViewClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateModel:(id)a0;

@end
