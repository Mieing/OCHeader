@class UIViewController, NSString, AWEAwemeModel, UIView, AWEFeedHotSpotCellViewController;
@protocol UIScrollViewDelegate;

@interface AWEFeedHotSpotCell : AWEAwemeDetailTableViewCell <AWEFeedTableViewCellProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEFeedHotSpotCellViewController *viewController;
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

- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)a0;
- (BOOL)isRelatedVideoPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (void)updateAntiAddictedOptStrongRemindView:(BOOL)a0;
- (BOOL)isViewerListShowing;
- (void)configWithModel:(id)a0;
- (void)resetRefreshFlag;
- (void)addFeedTableViewCellMaskView:(id)a0;
- (void)removeFeedTableViewCellMaskView;
- (void)removeCellChildVCForMemoryOpt;
- (void)replaceCurrentViewController:(id)a0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)detailViewWillDisappear;
- (void)setAntiAddictPureMode:(BOOL)a0;
- (BOOL)isCommentPanelShowing;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)stop;
- (void)reset;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)_setupChildVC;
- (void)willDisplay;

@end
