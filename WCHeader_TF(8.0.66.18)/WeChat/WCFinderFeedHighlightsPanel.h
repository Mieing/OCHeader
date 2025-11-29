@class UILabel, UIView, WCFinderFeedContentVM, WCFinderFeedHighlightStyle, NSString, UITableView, WCFinderNoMoreView, WCFinderFeedHighlightItem, FinderHighlightInfoParams;
@protocol WCFinderFeedHighlightsPanelDelegate;

@interface WCFinderFeedHighlightsPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) FinderHighlightInfoParams *highlightInfoParams;
@property (retain, nonatomic) WCFinderFeedHighlightStyle *feedHighlightStyle;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) long long currentPlayPosition;
@property (retain, nonatomic) WCFinderFeedHighlightItem *currentHightlightItem;
@property (nonatomic) int ignoreNextUpdateCurrentPlayPositionCount;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) WCFinderNoMoreView *noMoreView;
@property (nonatomic) double safeBottomInset;
@property (weak, nonatomic) id<WCFinderFeedHighlightsPanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHighlightInfoParams:(id)a0 contentVM:(id)a1;
- (void)updateCurrentPlayPosition:(double)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configPageSheetAndDetailView;
- (double)footerContentHeight;
- (void)layoutTitleView;
- (void)layoutTableView;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
