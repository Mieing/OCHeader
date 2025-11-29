@class UIView, NSString, UIImageView, WCFinderPoiBasicInfo, NSMutableArray, MMUILabel, UILabel, MMUIButton;
@protocol WCFinderPoiHeadViewDelegate;

@interface WCFinderPoiHeadView : UIView <WCFinderPoiDescViewDelegate, WCFinderPoiGroupBuyViewDelegate>

@property (retain, nonatomic) WCFinderPoiBasicInfo *poiBasicInfo;
@property (retain, nonatomic) MMUILabel *poiNameLabel;
@property (retain, nonatomic) MMUIButton *forwardBtn;
@property (retain, nonatomic) MMUIButton *favBtn;
@property (retain, nonatomic) NSMutableArray *descViewArray;
@property (retain, nonatomic) UIView *addressContainer;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) MMUIButton *navMapBtn;
@property (retain, nonatomic) MMUILabel *navMapLabel;
@property (retain, nonatomic) MMUIButton *takeCarBtn;
@property (retain, nonatomic) MMUILabel *takeCarLabel;
@property (retain, nonatomic) UIView *bottomBlankView;
@property (retain, nonatomic) UIView *dishesContainer;
@property (retain, nonatomic) UIView *dishesTopBlankView;
@property (retain, nonatomic) MMUILabel *dishesTitleLabel;
@property (retain, nonatomic) MMUIButton *dishesMoreButton;
@property (retain, nonatomic) NSMutableArray *dishesViewArray;
@property (retain, nonatomic) UIView *groupBuyContainer;
@property (retain, nonatomic) UIView *groupBuyTopBlankView;
@property (retain, nonatomic) MMUILabel *groupBuyTitleLabel;
@property (retain, nonatomic) NSMutableArray *groupBuyViewArray;
@property (retain, nonatomic) MMUIButton *groupBuyMoreButton;
@property (weak, nonatomic) id<WCFinderPoiHeadViewDelegate> delegate;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL isFinderHalfScreen;
@property (nonatomic) BOOL shouldShowTakeCarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWith:(id)a0 maxWidth:(double)a1;
+ (double)heightWhenShrinkingWith:(id)a0;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setDescView:(id)a0 isExpanding:(BOOL)a1;
- (void)updateWith:(id)a0;
- (void)onDragProgressChanged:(double)a0;
- (void)changeDetailViewsAlpha:(double)a0;
- (void)changeMainViewsAlpha:(double)a0;
- (void)updateFavSelected:(BOOL)a0;
- (id)genRecommendDishView:(id)a0;
- (id)genGroupBuyView:(id)a0 isLast:(BOOL)a1 hasGroupBuyMoreButton:(BOOL)a2;
- (void)onTapGroupBuyView:(id)a0;
- (void)onTapGroupBuyMoreButton;
- (void)groupBuyViewActionButtonDidClick:(id)a0;
- (void)updateMainFlexLayput;
- (void)updateDetailFlexLayout;
- (void)onTapForwardBtn:(id)a0;
- (void)onTapFavBtn:(id)a0;
- (void)onTapNavMapBtn:(id)a0;
- (void)onTapTakeCarBtn:(id)a0;
- (void)onTapAddressEntrance;
- (void)onTapRecommendDishes;
- (struct CGSize { double x0; double x1; })favBtnSize;
- (void)onTapDescViewExpandButton:(id)a0;
- (id)dataReportParamDict;
- (void).cxx_destruct;

@end
