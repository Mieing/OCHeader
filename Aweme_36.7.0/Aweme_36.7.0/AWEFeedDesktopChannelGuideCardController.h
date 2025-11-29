@class AWEUGDesktopChannelGuideInstallConfigModel, AWEUGDesktopChannelGuideTrackerInfoModel, NSString, AWEAwemeModel;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedDesktopChannelGuideCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AWEUGDesktopChannelGuideMessage>

@property (retain, nonatomic) AWEUGDesktopChannelGuideInstallConfigModel *installConfig;
@property (retain, nonatomic) AWEUGDesktopChannelGuideTrackerInfoModel *trackerInfo;
@property (nonatomic) BOOL isCancelClicked;
@property (nonatomic) BOOL isInstallClicked;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (void)showAlineCardDesktopChannelGuideWithModel:(id)a0 extraParams:(id)a1;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (void)cardDidDisappear:(id)a0 withAweme:(id)a1;
- (void)cardTemplateButtonClickWithParams:(id)a0;
- (void)handleRawData:(id)a0 pitayaModel:(id)a1;
- (id)buildCommonParams;
- (id)formatActionScheme:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
