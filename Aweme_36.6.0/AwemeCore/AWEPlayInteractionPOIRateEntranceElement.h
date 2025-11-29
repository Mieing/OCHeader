@class NSString, NSObject;
@protocol AWEPOIPromptCardManager;

@interface AWEPlayInteractionPOIRateEntranceElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) NSObject<AWEPOIPromptCardManager> *promptCardManager;
@property (nonatomic) BOOL didAddObserver;
@property (nonatomic) BOOL promptCardAlreadyShown;
@property (nonatomic) BOOL hideOtherElement;
@property (nonatomic) long long navigationVCCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)canShowElementWithContext:(id)a0;
+ (BOOL)isPersonalHomepageWithContext:(id)a0;
+ (BOOL)hitEntranceFiveStarABWithContext:(id)a0;
+ (BOOL)hitFrequencyWithContext:(id)a0;
+ (BOOL)hitPOIFrequencyWithContext:(id)a0;
+ (BOOL)hitVideoFrequencyWithContext:(id)a0;
+ (id)poiFrequencyKeyWithContext:(id)a0;
+ (BOOL)isPOIPageWithContext:(id)a0;
+ (id)videoFrequencyKeyWithContext:(id)a0;
+ (BOOL)isHomepageFamiliarWithContext:(id)a0;

- (void)setHide:(BOOL)a0;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)recordVideoFrequency;
- (void)recordPOIFrequency;
- (void)videoClosed:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)addObserver;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)removeObserver;

@end
