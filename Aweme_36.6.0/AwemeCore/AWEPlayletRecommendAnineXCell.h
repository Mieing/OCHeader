@class NSString, NSDictionary, AWEAwemeModel, UIView, AWEUserModel, UIViewController;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, AWEDetailCellViewControllerProtocol;

@interface AWEPlayletRecommendAnineXCell : UITableViewCell <BDXContainerLifecycleProtocol, AWEAwemeDetailCellProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXContainer;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (copy, nonatomic) id /* block */ getDetailTableContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) UIViewController<AWEDetailCellViewControllerProtocol> *viewController;
@property (retain, nonatomic) Class viewControllerClassType;
@property (nonatomic) double defaultSeekToTime;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *previousPage;
@property (weak, nonatomic) UIViewController *parentVC;
@property (nonatomic) BOOL shouldHideMusicInfo;
@property (nonatomic) BOOL shouldShowGoodsElement;
@property (nonatomic) BOOL shouldShowGoodsCardAnchorElement;
@property (nonatomic) BOOL innerInteractionDelay;
@property (nonatomic) BOOL shouldOptimizeInteractionDelayProcess;
@property (nonatomic) BOOL shouldForbidInitInteraction;
@property (nonatomic) BOOL shouldDelayAddInteraction;
@property (copy, nonatomic) NSString *detailEnterFrom;
@property (copy, nonatomic) NSString *detailReferString;
@property (nonatomic) BOOL forbidResetVideo;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) AWEUserModel *homepageUser;
@property (nonatomic) BOOL hasEntryFullPage;
@property (nonatomic) BOOL hasConfig;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL banGlobalRelay;

+ (id)reuseIdentifierWithMediaType:(long long)a0;
+ (id)reuseIdentifierWithMediaType:(long long)a0 isFakeAweme:(BOOL)a1;
+ (id)reuseIdentifierWithModel:(id)a0;
+ (id)recommendCellLynxSchema;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)configWithModel:(id)a0;
- (void)setInteractionControllerFactory:(Class)a0;
- (Class)interactionControllerFactory;
- (id)lynxView;
- (void)configLastCellMaskViewWithTitle:(id)a0 backHintText:(id)a1 backAction:(id /* block */)a2;
- (void)updateLynxData:(id)a0;
- (void)configCommentInputView;
- (void)replaceCurrentViewController:(id)a0;
- (void)__setupAnnieXLynxViewWithData:(id)a0;
- (id)getAnnieXBulletCardWithLynxSchema:(id)a0 data:(id)a1;
- (void)__updateAnnieXGlobalProps:(id)a0;
- (void)optimizedReloadWithLynxSchema:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;

@end
