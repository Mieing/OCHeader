@class IESLiveShortTouchActionMonitor, NSString, IESLiveShortTouchActionDataSource, UITableView;
@protocol IESLiveShortTouchActionScrollDelegate;

@interface IESLiveShortTouchActionView : UIView <UITableViewDataSource, UITableViewDelegate, HTSLivePluginLayoutView>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) IESLiveShortTouchActionDataSource *dataSource;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (weak, nonatomic) id<IESLiveShortTouchActionScrollDelegate> scrollDelegate;
@property (weak, nonatomic) IESLiveShortTouchActionMonitor *shortTouchMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)refreshLayout:(long long)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (BOOL)shouldShowMask;
- (void)insertIndex:(long long)a0 completion:(id /* block */)a1;
- (void)removeIndex:(long long)a0 completion:(id /* block */)a1;
- (void)reloadItemAtIndex:(long long)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfTypeInContainer:(unsigned long long)a0;
- (void)onShortTouchViewUIStateChange;
- (void)moveIndexFrom:(long long)a0 to:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)viewType;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)setHidden:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)setAlpha:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupTableView;
- (void)reloadItems;
- (id)gradientMaskLayer;

@end
