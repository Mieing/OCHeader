@class AWEChallengeCardModel, NSString, UIView;
@protocol AWEModernFeedCellContext, BDXViewContainerProtocol;

@interface AWEChallengeLynxCellController : UIViewController <BDXContainerLifecycleProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) AWEChallengeCardModel *model;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL shown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (id)bdxViewWithModel:(id)a0;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isMediaSourceCard;
- (void)notifyAppear:(id)a0;
- (void)notifyDisappear:(id)a0;
- (void)lynxViewDidMount;
- (void)recycleLynxView;
- (void)postLynxCardDataToWeb;
- (void)sendShowEventIfNeeded;
- (void)notifyHide:(id)a0;
- (void)notifyShow:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
