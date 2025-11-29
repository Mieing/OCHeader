@class UIView;
@protocol AWEAdLearnMoreLynxButton;

@interface AWELiveStreamSearchADTagElement : AWELiveLeftElement

@property (retain, nonatomic) UIView *lynxContainer;
@property (retain, nonatomic) UIView<AWEAdLearnMoreLynxButton> *adLearnMoreLynxButton;
@property (nonatomic) double lynxCardBottomOffset;
@property (nonatomic) BOOL lynxButtonLoadFail;

- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (BOOL)shouldShowLiveCommerceCard:(id)a0;
- (void)showAdLiveLynxButton;
- (void)addAdLearnMoreLynxButton;
- (void)updateAdLearnMoreLynxButtonWithModel;
- (void)updateLynxRawDataWithAuthorInfo;
- (void)appendLynxRawAdDataWithSearchCommonParams;
- (void)resetAdLiveLynxButton;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)viewDidLoad;

@end
