@interface FlowUIKit.FlowPagingView : UIView <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainTableView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ datasource;
    void /* unknown type, empty encoding */ pagerContainer;
    void /* unknown type, empty encoding */ currentScrollingListView;
    void /* unknown type, empty encoding */ currentList;
    void /* unknown type, empty encoding */ cellIdentifier;
    void /* unknown type, empty encoding */ tableHeaderContainerView;
    void /* unknown type, empty encoding */ currentListOffset;
    void /* unknown type, empty encoding */ currentMainOffset;
    void /* unknown type, empty encoding */ subCanScroll;
    void /* unknown type, empty encoding */ forceScroll;
    void /* unknown type, empty encoding */ isDownToUpScroll;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
