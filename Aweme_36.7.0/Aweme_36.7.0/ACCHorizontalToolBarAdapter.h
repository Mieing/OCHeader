@class HorizontalToolBarContainer, NSArray, NSDictionary;

@interface ACCHorizontalToolBarAdapter : NSObject {
    void /* function */ horizontalBarItemIdOrders;
    void /* function */ horizontalBarItems;
    void /* function */ displayHorizontalBarItems;
    void /* function */ expandPanelWillAppear;
    void /* function */ expandPanelDidAppear;
    void /* function */ barItemDidExpose;
    void /* function */ moreBarItemDidExpose;
    void /* function */ moreBarItemDidClick;
}

@property (nonatomic, retain) HorizontalToolBarContainer *toolBarContainer;
@property (nonatomic) long long fixedItemsCount;
@property (nonatomic) BOOL enablePlaceholderPrefix;
@property (nonatomic, copy) NSArray *horizontalBarItemIdOrders;
@property (nonatomic, copy) NSDictionary *horizontalBarItems;
@property (nonatomic, copy) NSArray *displayHorizontalBarItems;
@property (nonatomic, copy) id /* block */ expandPanelWillAppear;
@property (nonatomic, copy) id /* block */ expandPanelDidAppear;
@property (nonatomic, copy) id /* block */ barItemDidExpose;
@property (nonatomic, copy) id /* block */ moreBarItemDidExpose;
@property (nonatomic, copy) id /* block */ moreBarItemDidClick;

- (void)updateBarItemViewsRotateAngle:(double)a0 animated:(BOOL)a1;
- (void)reloadBarItemViewFor:(void *)a0 style:(id)a1 animated:(BOOL)a2;
- (void)reloadBarItemViewFor:(void *)a0 animated:(BOOL)a1;
- (void)reloadAndLayoutBarItemViewsWithAnimated:(BOOL)a0;
- (id)getBarItemWith:(void *)a0;
- (long long)getBarItemPositionWith:(void *)a0;
- (void)bindToolBarItems:(id)a0 fixedItemsCount:(long long)a1;
- (id)initWithToolBarContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
