@class UIColor, AWEPOIOffset, NSDictionary, NSArray, AWEPOIImageUploadModel, NSString, AWECityPOIDetailNavigationBar;

@interface AWECityPOIDetailNavigationBarViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSDictionary *sourceData;
@property (nonatomic) double offsetY;
@property (retain, nonatomic) AWEPOIOffset *naviBGStartOffset;
@property (retain, nonatomic) AWEPOIOffset *naviBGEndOffset;
@property (retain, nonatomic) NSArray *moreOptionItems;
@property (retain, nonatomic) AWEPOIImageUploadModel *poiImageUploadIcon;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *backUrl;
@property (nonatomic) BOOL hasDoneInitialStatusBarSet;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) AWECityPOIDetailNavigationBar *naviBar;
@property (nonatomic) BOOL atInitialStage;
@property (nonatomic) double breakHeight;
@property (retain, nonatomic) AWEPOIOffset *naviIconChangeOffset;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL disableAlphaChange;
@property (nonatomic) BOOL shouldHideBackBtn;
@property (readonly, nonatomic) BOOL navBarIconWithRoundCircle;

- (id)poiDetail;
- (void)pageBackAction;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didLoadPageModel:(id)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (id)constData;
- (id)generalContext;
- (id)buildNaviOffset:(id)a0;
- (unsigned long long)headerPhotoStyleType;
- (void)updatePOIDetail;
- (double)tryFetchNaviBarAlphaWithOffsetY:(double)a0;
- (void)dispatchNaviBarStatusDidChangeAction:(double)a0;
- (void)changeActionsStyleWithMode:(BOOL)a0;
- (double)tryFetchNaviBarAlphaWithDynamicParams;
- (void)updateNavigationBarIfNeed:(double)a0 naviIconChange:(double)a1 scrollView:(id)a2;
- (void)changeStatusBarStyleToLight:(BOOL)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)store;

@end
