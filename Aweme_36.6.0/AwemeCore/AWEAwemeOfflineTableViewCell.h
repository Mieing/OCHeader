@class NSString, NSDictionary, AWEAwemeModel, AWEAwemeOfflineCellViewController, UIView, UIViewController;
@protocol UIScrollViewDelegate;

@interface AWEAwemeOfflineTableViewCell : UITableViewCell <AWEAwemeContainerTableViewCellProtocol, AWEAwemeContainerTableViewCellPreloadProtocol, AWEFeedTableViewCellProtocol>

@property (nonatomic) BOOL isPad;
@property (retain, nonatomic) UIView *offlineCellMaskView;
@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeOfflineCellViewController *viewController;
@property (nonatomic) double defaultSeekToTime;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *previousPage;
@property (weak, nonatomic) UIViewController *parentVC;
@property (nonatomic) BOOL shouldHideMusicInfo;
@property (nonatomic) BOOL shouldShowGoodsElement;
@property (nonatomic) BOOL shouldShowGoodsCardAnchorElement;
@property (copy, nonatomic) NSString *offlineEnterFrom;
@property (copy, nonatomic) NSString *offlineReferString;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL hasEntryFullPage;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)reuseIdentifierWithMediaType:(long long)a0;
+ (id)reuseIdentifierWithMediaType:(long long)a0 isFakeAweme:(BOOL)a1;

- (void)pauseWithAnimation;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)a0;
- (id)aAWEPadModuleAdapter;
- (void)configWithModel:(id)a0;
- (void)removeCellChildVCForMemoryOpt;
- (void)configWithModel:(id)a0 parentVC:(id)a1;
- (void)adjustVideoFrameIfNeeded;
- (void)addChildVC;
- (void)removeChildVC;
- (void)removeOfflineCellMaskView;
- (void)addOfflineCellMaskView:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)stop;
- (void)reset;
- (void)dealloc;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
