@interface AWEFormatImpl.FormatMessageListView : AWEFormatImpl.EventForwardingView <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ defaultListHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_unReadView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandMaskView;
    void /* unknown type, empty encoding */ messageFullInTop;
    void /* unknown type, empty encoding */ unReadCount;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dataBuffer;
    void /* unknown type, empty encoding */ isExpand;
    void /* unknown type, empty encoding */ contentSizeObserver;
    void /* unknown type, empty encoding */ context;
}

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
