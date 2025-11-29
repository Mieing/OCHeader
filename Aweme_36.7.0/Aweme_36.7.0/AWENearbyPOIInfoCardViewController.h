@class NSDate, AWENearbyFeedbackSheet, NSString, AWEPageContext, AWEAwemeModel, AWEGradientView, CAGradientLayer, AWENearbyPOIInfoCardView, AWENearbyPOIBGView;
@protocol AWEPlayInteractionContextProtocol;

@interface AWENearbyPOIInfoCardViewController : UIViewController <AWENearbyFeedbackSheetDelegate, AWENearbyPOIInfoCardMessage, AWEFeedNearbyCardViewControllerProtocol>

@property (retain, nonatomic) AWENearbyPOIBGView *bgView;
@property (retain, nonatomic) AWENearbyFeedbackSheet *feedbackSheet;
@property (retain, nonatomic) AWENearbyPOIInfoCardView *cardView;
@property (nonatomic) BOOL isShowingCardView;
@property (retain, nonatomic) NSDate *willDisplayDate;
@property (retain, nonatomic) NSDate *endDisplayDate;
@property (retain, nonatomic) CAGradientLayer *enhancedInfoMaskLayer;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *playInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)didDisplay;
- (void)renderModel:(id)a0 extraParams:(id)a1;
- (void)feedbackSheet:(id)a0 didClickItem:(id)a1 atIndex:(long long)a2;
- (void)poiInfoCardDidTapPOIWithRouteMethod:(id)a0 model:(id)a1 bulletType:(id)a2;
- (void)setupMaskEnhancedNotification;
- (void)configFeedbackSheet;
- (void)onLongPressView:(id)a0;
- (id)alphaGradientLayer;
- (void)__configCardViewWithModel:(id)a0;
- (void)addGradientView;
- (void)updateLayoutWithModel:(id)a0;
- (void)__startCardViewAnimation;
- (void)deleteAweme:(id)a0;
- (id)feedbackItems;
- (void).cxx_destruct;
- (void)play;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)resetView;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
