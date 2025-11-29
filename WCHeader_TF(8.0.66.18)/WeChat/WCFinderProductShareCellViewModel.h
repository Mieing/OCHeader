@class NSString, AnyPromise, WCFinderProductShareViewBuilder, NSDate, WCFinderLiveProductShareItem;

@interface WCFinderProductShareCellViewModel : CommonMessageViewModel

@property (retain, nonatomic) WCFinderProductShareViewBuilder *builder;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) AnyPromise *getPreloadDataPromise;
@property (retain, nonatomic) NSDate *visibleDate;
@property (readonly, nonatomic) WCFinderLiveProductShareItem *item;
@property (copy, nonatomic) NSString *livingFinderUsername;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })defaultContentViewSize;
- (double)estimateWidth;
- (id)additionalAccessibilityDescription;
- (id)genFinderDataItem;
- (void)updateWithFetchData:(id)a0;
- (void)onCardInfoChanged;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (void)onReportExposureWithInterval:(long long)a0 userInfo:(id)a1;
- (void)onReportClickWithUserInfo:(id)a0;
- (id)reportAppMessageItem:(unsigned int)a0;
- (BOOL)isShareWithAnchor;
- (id)createFetchProductPromiseForce:(BOOL)a0 fromClick:(BOOL)a1;
- (id)fetchProductInfoOnClicked;
- (id)fetchProductInfoIfNever;
- (void)reportEcsData:(id)a0;
- (id)getShopIconType;
- (void)viewWillMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end
