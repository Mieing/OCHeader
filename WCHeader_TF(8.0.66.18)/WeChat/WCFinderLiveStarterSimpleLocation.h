@class MMUIImageView, UIView, LbsLifeData, WCLocationInfo, WCFinderLiveStarterSimpleBottomLocation, MMUIButton, MMUILabel;
@protocol LiveStarterSimpleLocationDelegate;

@interface WCFinderLiveStarterSimpleLocation : MMUIView

@property (retain, nonatomic) MMUIImageView *leftImageView;
@property (retain, nonatomic) MMUIButton *locationButton;
@property (retain, nonatomic) MMUILabel *locationLabel;
@property (retain, nonatomic) MMUIImageView *arrowImageView;
@property (retain, nonatomic) WCFinderLiveStarterSimpleBottomLocation *bottomLocation;
@property (retain, nonatomic) UIView *separateLineUnderDesc;
@property (retain, nonatomic) WCLocationInfo *poiInfo;
@property (retain, nonatomic) LbsLifeData *lbsLifeData;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<LiveStarterSimpleLocationDelegate> delegate;

- (id)initWithDelegate:(id)a0 type:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateLandscape:(BOOL)a0;
- (void)locationClick:(id)a0;
- (void)updatePOIViewWith:(id)a0;
- (id)getShowCityWithWCLocationInfo:(id)a0;
- (void)updateCurrentType;
- (BOOL)updateSimpleLocationLBSLife:(id)a0;
- (BOOL)showBottomLocation;
- (void).cxx_destruct;

@end
