@class WCFinderLiveDisplayWindowShareViewBuilder, WCFinderLiveAudienceComodityLogReporter, NSString, AnyPromise, WCFinderLiveShopWindowShareItem;

@interface WCFinderShopWindowShareCellViewModel : CommonMessageViewModel

@property (retain, nonatomic) WCFinderLiveShopWindowShareItem *loadedItem;
@property (retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter;
@property (retain, nonatomic) AnyPromise *loadDataIfNeverPromise;
@property (retain, nonatomic) WCFinderLiveDisplayWindowShareViewBuilder *builder;
@property (readonly, nonatomic) NSString *finderUsername;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)loadDataIfNever;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (double)estimateWidth;
- (id)comodityLogReporter;
- (void)onExposeReport;
- (void)reportEcsData:(id)a0;
- (id)item;
- (id)getShopIconType;
- (void)onClickReport;
- (void).cxx_destruct;

@end
