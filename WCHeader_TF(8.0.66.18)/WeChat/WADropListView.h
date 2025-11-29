@class NSString, NSMutableArray, UITableView;
@protocol WADropListViewDelegate;

@interface WADropListView : UIView <UITableViewDelegate, UITableViewDataSource, WADropItemTableViewCellDelegate> {
    UITableView *_tableView;
    NSMutableArray *_searchList;
}

@property (retain, nonatomic) NSMutableArray *dropList;
@property (weak, nonatomic) id<WADropListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)onSelect:(id)a0 value:(id)a1;
- (void)onDelete:(id)a0;
- (void)filterUpdate:(id)a0;
- (long long)getCurrentItemCount;
- (void).cxx_destruct;

@end
