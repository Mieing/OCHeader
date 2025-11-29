@interface AWEFormatImpl.LongPressPanelView : UIView <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ topOffset;
    void /* unknown type, empty encoding */ lrInset;
    void /* unknown type, empty encoding */ bottomInset;
    void /* unknown type, empty encoding */ requestDismissPanel;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
