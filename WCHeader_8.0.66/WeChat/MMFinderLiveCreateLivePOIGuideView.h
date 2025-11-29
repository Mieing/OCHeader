@class MMUIImageView, MMFinderLiveCreateLiveBottomPOIListBar, LbsLifeData, WCLocationInfo, MMUIButton, MMUILabel;
@protocol MMFinderLiveCreateLivePOIGuideViewDelegate, MMFinderLiveCreateLivePOIGuideViewDataSource;

@interface MMFinderLiveCreateLivePOIGuideView : UIView

@property (retain, nonatomic) MMUIImageView *poiIconView;
@property (retain, nonatomic) MMUIImageView *arrowIconView;
@property (retain, nonatomic) MMUILabel *locationLabel;
@property (retain, nonatomic) MMUIButton *locationButton;
@property (retain, nonatomic) MMFinderLiveCreateLiveBottomPOIListBar *bottomPOIListBar;
@property (retain, nonatomic) WCLocationInfo *poiInfo;
@property (readonly, nonatomic) LbsLifeData *lbsLifeData;
@property (weak, nonatomic) id<MMFinderLiveCreateLivePOIGuideViewDelegate> delegate;
@property (weak, nonatomic) id<MMFinderLiveCreateLivePOIGuideViewDataSource> dataSource;
@property (readonly, nonatomic) double contentHeight;

- (id)init;
- (void)initIconView;
- (void)initLocationLabel;
- (void)initLocationButton;
- (void)initBottomPOIListBar;
- (void)layoutSubviews;
- (void)layoutLocationLabel;
- (void)layoutIconviews;
- (void)layoutLocationButton;
- (void)layoutBottomPOIListBarIfNeeded;
- (void)setCurrentPOIInfo:(id)a0;
- (void)reset;
- (void)updatePOIIconIfNeeded;
- (void)updateLocationLabelContentIfNeeded;
- (void)updateBottomPOIListBarIfNeeded;
- (id)getShowCityWithWCLocationInfo:(id)a0;
- (void)checkSelfHeightChanged;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)a0;
- (void)updateLocationCityInfo:(id)a0;
- (id)evolvePoiAddressFromLbsLife:(id)a0;
- (void)onLocationButtonClick:(id)a0;
- (void).cxx_destruct;

@end
