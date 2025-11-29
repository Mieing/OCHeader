@class NSString, NSDictionary, NSDate, NSMutableArray, AWEProfileBaseTagView;

@interface AWEProfileHeaderTagAreaSectionController : AWEBaseListSectionController <AWEProfileHeaderTagAreaCellDelegate>

@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL canTrackShowEvent;
@property (nonatomic) BOOL canTrackShowEventIsMore;
@property (retain, nonatomic) NSDictionary *cacheTagListShowParams;
@property (retain, nonatomic) NSMutableArray *cacheTagShowParamsArray;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) NSDate *lastTransferDate;
@property (retain, nonatomic) AWEProfileBaseTagView *lastTransferView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldTrackLinkAdditionalEvent:(id)a0;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)enterFrom;
- (id)enterFrom;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (id)getRelatedComponentValue:(id)a0;
- (void)trackMoreButtonClick;
- (void)trackTagViewClick:(id)a0;
- (void)tagViewDidTransfer:(id)a0;
- (void)trackTagViewShow:(id)a0;
- (void)refreshProfileTagHeight:(double)a0;
- (void)trackTagListShowWithTagViewList:(id)a0 hasMoreButton:(long long)a1 isMore:(long long)a2;
- (void)trackEventWithTag:(id)a0 tagView:(id)a1;
- (void)trackGameDownloadIfNeededWithModel:(id)a0 forShow:(BOOL)a1;
- (void)trackStarAtlasGuideForShow:(BOOL)a0;
- (void)trackLinkEventIfNeed:(id)a0 eventTag:(id)a1;
- (void)trackStayDurationIfNeed;
- (id)tagViewCommonParams:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
