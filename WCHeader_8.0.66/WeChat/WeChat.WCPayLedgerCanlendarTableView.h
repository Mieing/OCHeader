@interface WeChat.WCPayLedgerCanlendarTableView : UIView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ currentDate;
    void /* unknown type, empty encoding */ rangeIndicator;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ foregoingMonths;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ selectButtonCollectView;
    void /* unknown type, empty encoding */ selectButtonDataSource;
    void /* unknown type, empty encoding */ currentSelectedButtonIndex;
    void /* unknown type, empty encoding */ dateHeaderTapAction;
    void /* unknown type, empty encoding */ selectedRangeUpdateAction;
    void /* unknown type, empty encoding */ selectedRange;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
