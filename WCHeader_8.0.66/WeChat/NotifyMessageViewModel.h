@class WCFinderLiveShareCardExposeReportAdapter, MMFinderLiveContentVM, AnyPromise, NSDate, NotifyMsgItem;

@interface NotifyMessageViewModel : CommonMessageViewModel

@property (retain, nonatomic) NotifyMsgItem *notifyMsgItem;
@property (retain, nonatomic) WCFinderLiveShareCardExposeReportAdapter *exposeReportAdapter;
@property (retain, nonatomic) NSDate *startAutoPlay;
@property (retain, nonatomic) AnyPromise *loadLiveInfoPromise;
@property (retain, nonatomic) MMFinderLiveContentVM *contentVM;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)titleFont;
+ (id)itemsFont;
+ (id)reasonFont;
+ (double)itemsFontSize;
+ (BOOL)itemsDisplayContentAtTopicRight;

- (void)exposeExtStatsReportWhenDisappearFrom:(id)a0;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateHeight;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)verticalContentMargin;
- (BOOL)isLiveCell;
- (BOOL)isLiveCellLargeStyle;
- (void)report21158Expose;
- (void).cxx_destruct;

@end
