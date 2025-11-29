@class WCFinderDataItem, WCFinderFeedStaticCoverView;

@interface WCFinderLiveCompleteLiveVideoContentItem : UIView

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderFeedStaticCoverView *coverView;
@property (copy, nonatomic) id /* block */ action;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateDataItem:(id)a0;
- (void)onClickItem:(id)a0;
- (void).cxx_destruct;

@end
