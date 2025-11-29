@class DUXTip;

@interface AWEMateApplicationContainerViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) DUXTip *tip;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)setupViewHolder;
- (void)showTip;
- (id)fontSize:(long long)a0 weight:(long long)a1;
- (void)hideTip;
- (void)updateLayout;
- (void).cxx_destruct;
- (double)headerViewHeight;

@end
