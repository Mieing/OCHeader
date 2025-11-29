@class IESLiveNativeAppShelfTradeDataView;

@interface IESLiveNativeAppShelfTopTradeDataCell : UITableViewCell

@property (retain, nonatomic) IESLiveNativeAppShelfTradeDataView *tradeDataView;

- (void)updateWithTopTradeData:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
