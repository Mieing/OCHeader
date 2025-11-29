@class NSString, AWEAwemeModel, AWEFeedPOIDynamicCardCellViewController, UIView, UIViewController;
@protocol UIScrollViewDelegate;

@interface AWEFeedPOIDynamicCardTableViewCell : UITableViewCell <AWEFeedTableViewCellProtocol>

@property (retain, nonatomic) AWEFeedPOIDynamicCardCellViewController *viewController;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)a0;
- (void)didDisplay;
- (BOOL)isLikeUserPanelShowing;
- (void)configWithModel:(id)a0;
- (void)resetRefreshFlag;
- (void)removeCellChildVCForMemoryOpt;
- (void)__addChildVC;
- (void)__removeChildVC;
- (BOOL)isCommentPanelShowing;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)stop;
- (void)reset;
- (double)currentPlaybackTime;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
