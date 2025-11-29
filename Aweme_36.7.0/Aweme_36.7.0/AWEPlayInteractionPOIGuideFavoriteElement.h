@class AWEPlayInteractionPOIGuideFavoriteView, NSString;

@interface AWEPlayInteractionPOIGuideFavoriteElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionPOIGuideFavoriteView *poiView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)p_layoutUI;
- (void)p_showElementIfNeeded;
- (BOOL)shouldShowPOIFavoriteElementWhenPlaying;
- (void)p_lanuchShowElement;
- (void)p_addFavoriteObserver;
- (id)p_trackCommonParams;
- (id)p_trackLoginParams;
- (void)p_trackShowPOIDetailElement;
- (void)p_trackShowPOIElement;
- (void)p_updateShowElementLayoutWithViewConfig:(id)a0;
- (void)p_didReceiveFavoriteStatusUpdatedNotifications:(id)a0;
- (void)p_configPOIViewTouchEvent;
- (BOOL)shouldShowPOIFavoriteElement;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
