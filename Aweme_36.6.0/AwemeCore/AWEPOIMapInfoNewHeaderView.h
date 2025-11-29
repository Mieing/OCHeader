@class UIView, NSString, AWEPOIMapInfoHeaderTransportContainerView, AWEPOIMapContext, AWEModernPOIDetailCollectButton, AWEPOIDetailResponse, NSDictionary, UILabel;
@protocol AWEPOIModalContentDelegate;

@interface AWEPOIMapInfoNewHeaderView : UIView <AWEPOIMapInfoHeaderViewProtocol>

@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UIView *drivingContainerView;
@property (retain, nonatomic) UILabel *drivingLabel;
@property (retain, nonatomic) AWEModernPOIDetailCollectButton *collectButton;
@property (retain, nonatomic) UIView *navigationButton;
@property (retain, nonatomic) UIView *footprintButton;
@property (retain, nonatomic) AWEPOIMapInfoHeaderTransportContainerView *transportView;
@property (nonatomic) double lastHeaderHeight;
@property (weak, nonatomic) AWEPOIMapContext *context;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) id<AWEPOIModalContentDelegate> modalContentDelegate;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindActionAndState;
- (void)handleCollect;
- (id)initWithPOIDetail:(id)a0 logExtra:(id)a1 context:(id)a2;
- (void)updateDataAndLayout;
- (void)trackAdPoiCollectClick;
- (BOOL)hasFootprintButton;
- (BOOL)isNavigationHighlight;
- (id)createItemViewWithImage:(id)a0 text:(id)a1 highlight:(BOOL)a2;
- (void)handleNavigate;
- (void)handleFootprintClicked;
- (void).cxx_destruct;
- (void)setupUI;
- (double)heightForHeader;

@end
