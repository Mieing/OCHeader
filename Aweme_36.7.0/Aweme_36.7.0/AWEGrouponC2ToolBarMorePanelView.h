@class UIControl, NSArray, NSString, UITableView;

@interface AWEGrouponC2ToolBarMorePanelView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) long long pageType;
@property (retain, nonatomic) UIControl *validAreaView;
@property (retain, nonatomic) UITableView *itemTableView;
@property (nonatomic) double validAreaTopY;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (copy, nonatomic) NSArray *itemDataList;
@property (nonatomic) BOOL isClosing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemDataList:(id)a1 pageType:(long long)a2 dismissCompletion:(id /* block */)a3;

- (void)showWithAnimation;
- (void)closeWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)appEnterBackground;
- (double)itemTableViewHeight;
- (id)commonTrackEventParamsWithDataItem:(id)a0 itemCell:(id)a1;
- (id)getBtmSourceTokenStringWithIndex:(long long)a0 itemModel:(id)a1;
- (id)nearbyC2Container;
- (void)trackShowEventWithDataItem:(id)a0 itemCell:(id)a1 customParams:(id)a2;
- (void)sendImpressionWithItem:(id)a0;
- (void)trackClickEventWithDataItem:(id)a0 itemCell:(id)a1 customParams:(id)a2;
- (void)updatePanelData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (long long)itemCount;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
