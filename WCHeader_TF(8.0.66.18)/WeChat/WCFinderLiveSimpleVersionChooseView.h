@class NSString, CAShapeLayer, UIView, NSMutableArray, MMTableView;
@protocol MMFinderLiveSimpleVersionChooseViewDelegate;

@interface WCFinderLiveSimpleVersionChooseView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) BOOL isSimpleVersion;
@property (weak, nonatomic) id<MMFinderLiveSimpleVersionChooseViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithSimpleVersion:(BOOL)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (double)getTableHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)pageSheetDidDisappear;
- (void).cxx_destruct;

@end
