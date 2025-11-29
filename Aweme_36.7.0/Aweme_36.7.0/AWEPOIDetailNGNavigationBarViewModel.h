@class UIColor, NSString, AWEPOIOffset, NSDictionary, DitoGeneralContainerPageContext, AWEPOIDetailResponse, AWEPOIDetailNGNavigationBarComponentView;

@interface AWEPOIDetailNGNavigationBarViewModel : DitoComponentViewModel

@property (retain, nonatomic) AWEPOIDetailResponse *temporatyPOIDetail;
@property (retain, nonatomic) AWEPOIOffset *naviStartOffset;
@property (retain, nonatomic) AWEPOIOffset *naviEndOffset;
@property (retain, nonatomic) AWEPOIOffset *naviBGStartOffset;
@property (retain, nonatomic) AWEPOIOffset *naviBGEndOffset;
@property (retain, nonatomic) AWEPOIOffset *naviIconChangeOffset;
@property (copy, nonatomic) NSString *mapURL;
@property (copy, nonatomic) NSDictionary *sourceData;
@property (readonly, nonatomic) DitoGeneralContainerPageContext *generalContext;
@property (nonatomic) BOOL firstCompleteShow;
@property (nonatomic) BOOL shouldEventThrough;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isContainerMaxUnfold;
@property (nonatomic) BOOL isInUnfoldCollapse;
@property (weak, nonatomic) AWEPOIDetailNGNavigationBarComponentView *componentView;
@property (nonatomic) BOOL navBarIconWithRoundCircle;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL disableAlphaChange;
@property (nonatomic) BOOL shouldHideBackBtn;
@property (nonatomic) double iconChangeThreshHold;

- (id)poiDetail;
- (void)pageBackAction;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)didLoadPageModel:(id)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)halfContainerMaxUnfoldState:(BOOL)a0 isInUnfoldCollapse:(BOOL)a1;
- (id)constData;
- (id)buildNaviOffset:(id)a0;
- (void)updatePOIDetail;
- (void)dispatchNaviBarStatusDidChangeAction:(double)a0;
- (void)componentViewWillShow;
- (BOOL)useContentContainer;
- (double)hotelHeaderImageHeight;
- (double)alphaByScrollViewOffsetY:(double)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)store;

@end
