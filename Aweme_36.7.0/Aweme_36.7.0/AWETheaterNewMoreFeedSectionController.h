@class AWETheaterTracker, AWETheaterPageContext, NSString, AWEBinding;

@interface AWETheaterNewMoreFeedSectionController : AWEBaseListSectionController <AWETheaterSectionControllerProtocol>

@property (nonatomic) BOOL callingVCAppear;
@property (retain, nonatomic) AWEBinding *callingVCAppearBinding;
@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (id)cellIdentifierForModel:(id)a0 index:(long long)a1;
- (void)themeDidChangeNoti:(id)a0;
- (void)trackClickCard:(id)a0 model:(id)a1 index:(long long)a2;
- (void)trackShowCard:(id)a0 model:(id)a1 index:(long long)a2;
- (void)revokeFeedbackWithModel:(id)a0 feedbackInfo:(id)a1 cell:(id)a2;
- (void)resetBackgroundConfig;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBackgroundColor;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
