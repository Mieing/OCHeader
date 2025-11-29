@class IESLiveBackgroundView, NSString, IESLiveInnerFeedPreStreamModel, UIButton;
@protocol IESLiveInnerFeedPrestreamService;

@interface IESLiveInnerFeedPreStreamCell : UICollectionViewCell <IESLivePlayerControllerDelegate, HTSLiveAudienceViewControllerDelegate, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedCellProtocol>

@property (nonatomic) BOOL isMounted;
@property (nonatomic) BOOL isInnerPrestreamEnterRoom;
@property (nonatomic) BOOL isEnterOtherPage;
@property (retain, nonatomic) id<IESLiveInnerFeedPrestreamService> prestreamService;
@property (retain, nonatomic) IESLiveInnerFeedPreStreamModel *itemModel;
@property (retain, nonatomic) IESLiveBackgroundView *backgroundImageView;
@property (retain, nonatomic) UIButton *backButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)handleAppWillResignActiveNotification:(id)a0;
- (void)updateWithItemModel:(id)a0;
- (void)didEndDisplayCell;
- (void)handleAppDidBecomeActiveNotification:(id)a0;
- (void)innerFeedDidAppear;
- (void)innerFeedDidDisappear;
- (void)closeWithRoom:(id)a0 closeType:(unsigned long long)a1;
- (BOOL)canCloseWithRoom:(id)a0 closeType:(unsigned long long)a1;
- (void)mountCell;
- (void)unMountCell:(long long)a0;
- (void)addPrestreamObserver;
- (void)reportMountCellTrack;
- (void)configurePrestreamVC;
- (void)pushAudienceViewController:(id)a0;
- (void)innerFeedPreStreamExit;
- (void)innerFeedPreStreamExitWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)loadViews;
- (void)willDisplayCell;

@end
