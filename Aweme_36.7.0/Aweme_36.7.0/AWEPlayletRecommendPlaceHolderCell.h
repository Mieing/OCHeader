@class NSString, NSDictionary, AWEAwemeModel, AWEUserModel, UIViewController;
@protocol AWEDetailCellViewControllerProtocol;

@interface AWEPlayletRecommendPlaceHolderCell : UITableViewCell <AWEAwemeDetailCellProtocol>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifierWithMediaType:(long long)a0;
+ (id)reuseIdentifierWithMediaType:(long long)a0 isFakeAweme:(BOOL)a1;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)configWithModel:(id)a0;
- (void)setInteractionControllerFactory:(Class)a0;
- (Class)interactionControllerFactory;
- (void)configLastCellMaskViewWithTitle:(id)a0 backHintText:(id)a1 backAction:(id /* block */)a2;
- (void)configCommentInputView;
- (void)replaceCurrentViewController:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;

@end
