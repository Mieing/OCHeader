@class IESECMallInnerFeedImmersionNavBar, NSString, UIView;
@protocol IESECMallFeedContainerViewProtocol;

@interface IESECMallImmersionInnerFeedViewController : IESECMallInnerFeedBaseViewController <IESECMallInnerFeedImmersionContainerViewDelegate, IESECSKUServiceProtocol> {
    UIView<IESECMallFeedContainerViewProtocol> *_containerView;
}

@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) IESECMallInnerFeedImmersionNavBar *immersionNavbar;
@property (nonatomic) BOOL isInnerTheme;
@property (nonatomic) BOOL isFromOtherTab;
@property (nonatomic) BOOL hasClickBack;
@property (retain, nonatomic) NSString *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)configBtmTrackerV2;
- (id)shareTrackParams;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (void)skudSpecsChangedWithSKUInfo:(id)a0;
- (id)btmIDWithBtmInfo:(id)a0 enterNewPage:(BOOL)a1;
- (void)didAddCartWithSKUInfo:(id)a0;
- (id)initWithFeedNode:(id)a0;
- (BOOL)getActivityTypeFromLabelInfo;
- (id)cartEntranceBtmID:(BOOL)a0;
- (id)shareEntranceBtmID:(BOOL)a0;
- (id)getBtmIDWithContentClickEnterNewPage:(BOOL)a0 index:(id)a1;
- (id)getBtmIDWithActionType:(long long)a0 customType:(unsigned long long)a1 index:(long long)a2 enterNewPage:(BOOL)a3;
- (void)updateNavbarTitle:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)containerView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setCanAutoPlay:(BOOL)a0;

@end
