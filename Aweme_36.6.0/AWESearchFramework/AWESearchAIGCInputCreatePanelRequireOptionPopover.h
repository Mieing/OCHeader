@class NSArray, NSString, UITableView;

@interface AWESearchAIGCInputCreatePanelRequireOptionPopover : UIView <DUXPopoverContent, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *optList;
@property (copy, nonatomic) id /* block */ selectCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listBGColor;

- (id)duxPopover_view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 optList:(id)a1 selectCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
