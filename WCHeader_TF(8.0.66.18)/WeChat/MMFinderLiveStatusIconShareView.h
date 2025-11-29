@class WCFinderLiveIconImageView;

@interface MMFinderLiveStatusIconShareView : MMFinderLiveBaseShareView

@property (retain, nonatomic) WCFinderLiveIconImageView *statusView;

- (void)refreshSubviews;
- (void)refreshStatusView;
- (void)reloadStatusViewIfNeededWithStyle:(unsigned long long)a0;
- (void)refreshStatusViewWithShareItem:(id)a0;
- (void).cxx_destruct;

@end
