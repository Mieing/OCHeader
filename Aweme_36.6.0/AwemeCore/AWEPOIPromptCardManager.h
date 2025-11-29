@class AWEAwemeModel, AWEPOIVideoDarenCardView, AWEPOILynxContainerView, AWEPOIMapCardView, UIView, NSMutableDictionary, NSString, NSDictionary, AWEPOIUGCRateCardView;

@interface AWEPOIPromptCardManager : NSObject <AWEPOICubeViewDelegate, AWEPOIUGCRateCardViewDelegate, AWEPOIMapCardViewDelegate, AWEPOIVideoDarenCardViewDelegate, AWEPOIPromptCardManager>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxCardView;
@property (retain, nonatomic) AWEPOIUGCRateCardView *rateCardView;
@property (retain, nonatomic) AWEPOIMapCardView *mapCardView;
@property (retain, nonatomic) AWEPOIVideoDarenCardView *darenCardView;
@property (nonatomic) BOOL hasRegisterLynxBridge;
@property (nonatomic) BOOL hasPromptCard;
@property (nonatomic) BOOL didLynxLoadedError;
@property (nonatomic) BOOL didLynxFinishLoaded;
@property (nonatomic) BOOL isCardShowing;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long createFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ promptViewAppearingBlock;
@property (copy, nonatomic) id /* block */ promptViewDisappearingBlock;
@property (copy, nonatomic) id /* block */ promptViewLoadFailBlock;
@property (copy, nonatomic) id /* block */ promptViewDidShowBlock;
@property (copy, nonatomic) id /* block */ displayingBlock;
@property (copy, nonatomic) id /* block */ tappedBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly, nonatomic) long long cardType;
@property (nonatomic) double cardLeftX;
@property (weak, nonatomic) UIView *bottomAlignView;
@property (nonatomic) double cardBottomOffsetY;
@property (nonatomic) struct CGSize { double width; double height; } maxCardSize;
@property (nonatomic) BOOL isFromInnerFlow;

+ (long long)getPromptCardTypeWithAweme:(id)a0 referString:(id)a1 createFrom:(unsigned long long)a2;
+ (BOOL)checkCouldShowDarenCardWithAweme:(id)a0 referString:(id)a1;

- (void)viewController_viewWillAppear;
- (void)setupCardWithModel:(id)a0 parentView:(id)a1;
- (void)updateCardSize:(struct CGSize { double x0; double x1; })a0;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void)showPOIPromptCardImmediately:(BOOL)a0;
- (void)showPromptCardView;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)subscribeUgcBDXEvent;
- (void)publishEventWithName:(id)a0 eventAttachedParams:(id)a1;
- (void)closePOIMapCardView;
- (void)didClickSeeNearbyAction;
- (void)hidePromptCardView;
- (void)p_createSpuLynxCardView;
- (void)p_createUGCRateLynxCardView;
- (void)p_createUGCRateCardView;
- (void)p_createPOIMapCardView;
- (void)p_createPOIInnerCardView;
- (void)p_createDarenCardView;
- (void)closeRateCardView;
- (void)updateDarenCardViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)closeDarenCardView;
- (void)cubeView:(id)a0 didFailDownloadWithError:(id)a1;
- (void)cubeView:(id)a0 didFailLoadWithError:(id)a1;
- (void)tryShowing;
- (void).cxx_destruct;
- (void)reset;
- (void)dismiss:(BOOL)a0;

@end
