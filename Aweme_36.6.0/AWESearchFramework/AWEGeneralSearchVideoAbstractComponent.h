@class AWESearchEventDispather, NSString, AWEGeneralSearchVideoCardModel, NSDictionary, UIView, AWESearchCardParagraphComponentModel, NSMutableArray;
@protocol AWESearchComponentProtocol, AWESearchCardParagraphComponentProvider, AWESearchContainerProtocol;

@interface AWEGeneralSearchVideoAbstractComponent : AWESearchComponent <AWEGeneralSearchVideoAbstractProvider>

@property (retain, nonatomic) id<AWESearchCardParagraphComponentProvider> paragraphComponent;
@property (retain, nonatomic) AWESearchCardParagraphComponentModel *paragraphComponentModel;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) NSMutableArray *prefixArray;
@property (retain, nonatomic) UIView *tapContainerView;
@property (retain, nonatomic) NSMutableArray *rangeArray;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)descriptionStringForAweme:(id)a0;
+ (id)configComponentModelWith:(id)a0 width:(double)a1;
+ (void)updateComponent:(id)a0 withModel:(id)a1 withWidth:(double)a2;
+ (id)shortAnswerStringForAweme:(id)a0 width:(double)a1;
+ (id)componentPrefixWith:(id)a0 generalSearchModel:(id)a1 width:(double)a2;
+ (id)TitleWrapOptimizedAb;
+ (id)contentStringForAweme:(id)a0 model:(id)a1;
+ (long long)maxLinesForAweme:(id)a0 model:(id)a1;
+ (id)setDescriptionStringWithModelString:(id)a0 model:(id)a1;
+ (id)replaceLineBreakForString:(id)a0;
+ (id)generateVideoShortAnswerWith:(id)a0;
+ (id)getAbstractAttributedString:(id)a0 attributes:(id)a1 showAuthorName:(BOOL)a2 authorName:(id)a3 containerWidth:(double)a4 leftMargin:(double)a5 rightMargin:(double)a6 paragraphStyle:(id)a7;
+ (id)generateVideoSummaryWith:(id)a0 attributes:(id)a1 authorName:(id)a2;
+ (id)generateVideoSectionAbatrctText:(id)a0 attributes:(id)a1 authorName:(id)a2 width:(double)a3;
+ (id)replacePrefixImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)aAWEPadBizUIAdapter;
- (void)trackSearchResultClick:(id)a0;
- (BOOL)openCommentPanelInflow;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)tokenTypeForModel:(id)a0;
- (void)reportTagsFromComponentToVCWithTags:(id)a0 searchID:(id)a1;
- (id)p_getVideoCardBtmDcmInfoDict;
- (void)clickTextAreaToInFlow:(id)a0;
- (void)clickTextAreaToInFlow:(id)a0 clickIcon:(BOOL)a1;
- (BOOL)isAttributedStringTruncated;
- (id)p_context;
- (id)searchTransitionParams:(id)a0;
- (BOOL)enableSearchClientTagsReport;
- (void)ifNeedReportTagsWithSearchID:(id)a0;
- (void)generalSearchEnterPersonalTracker:(id)a0 toUserID:(id)a1;
- (BOOL)openCommentPanelInflowWithClickIcon:(BOOL)a0;
- (long long)videoAbstractStrategy;
- (id)interactor;
- (void).cxx_destruct;
- (id)componentView;

@end
