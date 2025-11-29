@class AWEProfileExtensionAreaCommonParamModel, BDXBridgeEventSubscriber, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEPOIUserProfileEntryController_New : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriberRefreshPower;
@property (nonatomic) BOOL hasTrackExposureEvent;
@property (nonatomic) BOOL visitorShowRedDot;
@property (copy, nonatomic) NSString *releaseTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)configDelegate:(id)a0;
- (void)cardWillDisappear;
- (id)getSubTitleText;
- (void)addSubscriber;
- (BOOL)getRedPoint;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;

@end
