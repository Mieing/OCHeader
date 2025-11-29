@class WCFinderPassThoughView, NSHashTable;

@interface WCFinderTableViewCell : UITableViewCell

@property (retain, nonatomic) WCFinderPassThoughView *wc_contentView;
@property (retain, nonatomic) NSHashTable *hiddenOnHalfHashTable;
@property (nonatomic) double contentWidth;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)clearHalfArrayNoneRenderedViews;
- (void)willBeginDisplay:(long long)a0;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)a0;
- (void)aopAddSubViewAction;
- (void)layoutSubviews;
- (void)reLayoutContentView;
- (void)cellStartExposeReportAction;
- (void)doCellEndExposeAction;
- (void).cxx_destruct;

@end
