@class NSString, UITableViewCell, NSMutableArray, UITableView;
@protocol WCAddressTableViewDelegate;

@interface WCAddressPickerCollectionCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, ILinkEventExt> {
    id<WCAddressTableViewDelegate> m_delegate;
    NSString *m_selectedString;
    double m_pickerGroupHeight;
    double m_topBarCellHeight;
    UITableViewCell *m_defaultTopCell;
    UITableViewCell *m_streetTipCell;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *stageData;
@property (copy, nonatomic) NSString *tipLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)setSelectedString:(id)a0;
- (void)setTopBarHeight:(double)a0 andBtnViewHeight:(double)a1;
- (id)defaultTopCell;
- (id)tipCellForTableView:(id)a0 tipContent:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)jumpToSelectRow;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)needDisplayTipCell;
- (long long)otherCellNumber;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
