@class AWEEditActionContainerView;

@interface ACCEditBottomToolBarContainer : ACCEditToolBarContainer

@property (retain, nonatomic) AWEEditActionContainerView *barContentView;

- (id)barItemContentView;
- (void)setUpContentToolBar;
- (double)bottomItemSpacing;
- (void).cxx_destruct;
- (id)initWithContentView:(id)a0;
- (void)containerViewDidLoad;

@end
