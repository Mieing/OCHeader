@class WCPayTableCellViewDataView;

@interface WCPayWalletViewCell : UITableViewCell

@property (retain) WCPayTableCellViewDataView *dataView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateNumberDelegate:(id)a0;
- (void)updateLine:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateDataView;
- (void)updateViewData:(id)a0 RedDot:(id)a1 delegate:(id)a2;
- (id)getAccessibilityLabelString;
- (void).cxx_destruct;

@end
