@class AWERelatedVideoHunterContainer, UILabel, UIScrollView, UIView;

@interface AWERVLVShoppingCartPanelViewController : AWERVMetaPanelViewController

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *placeHolderScrollView;
@property (retain, nonatomic) AWERelatedVideoHunterContainer *hunterView;
@property (copy, nonatomic) id /* block */ metaInfoCloseBlock;

- (void)refreshWithEntranceInfo:(id)a0;
- (id)panelContentView;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)closeButtonTapped;

@end
