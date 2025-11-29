@class UIViewController, AWENearbyPageContext, NSString, AWEBinding, AWEAwemeModel, UICollectionView, UILongPressGestureRecognizer;
@protocol AWENearbyC2ChildTrackerProtocol, AWENearbyC2ContainerFeedCellControllerProtocol, AWENearbyC2NicolEventDelegate;

@interface AWENearbyC2BaseFeedCell : UICollectionViewCell <AWENearbyTaskHighlightFeedCardMessage, AWENearbyC2ContainerFeedCellProtocol>

@property (retain, nonatomic) AWEBinding *autoScrollEndBind;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (retain, nonatomic) id<AWENearbyC2ContainerFeedCellControllerProtocol, AWENearbyC2ChildTrackerProtocol> controller;
@property (weak, nonatomic) UIViewController *parentVC;
@property (weak, nonatomic) UIViewController *feedController;
@property (weak, nonatomic) id<AWENearbyC2NicolEventDelegate> nicolDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL reuseCell;
@property (nonatomic) BOOL reuseCard;
@property (nonatomic) double displayTime;
@property (copy, nonatomic) NSString *partialShowtimeLeaveMethodStr;
@property (copy, nonatomic) id /* block */ longPressedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UICollectionView *collectionView;

+ (id)commonParamsWithAweme:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateCellSizeWithWidth:(double)a0 model:(id)a1;

- (void)clearStatus;
- (void)didClick;
- (id)commonParamsWithAweme:(id)a0;
- (void)endDisplay;
- (id)feedbackDataWithAwemeModel:(id)a0 height:(double)a1;
- (id)hostCardInfoFromAwemeModel:(id)a0 cardType:(long long)a1 height:(double)a2;
- (id)sceneFromNegativeFeedbackSetting;
- (id)feedbackModelWithLongPress:(id)a0;
- (void)handleHighlightFeedCardWithContext:(id)a0;
- (void)cellDidScrollDisappearTwoThirds;
- (void)cellDidScrollAppearTwoThirds;
- (BOOL)trackPartialShowEnable;
- (void)trackCellPartialShowWithAweme:(id)a0;
- (void)trackPartialShowForOtherEvents;
- (void)willLeaveWithLeaveMethod:(long long)a0;
- (void)tryAddFeedBackLongPressGestureRecognizer;
- (void)showHighLight;
- (void)trackCellClickWithAweme:(id)a0;
- (void)trackCellClickForOtherEvents;
- (void)collectionViewDidChangeContentOffset;
- (BOOL)trackClientShowEnable;
- (void)trackCellShowWithAweme:(id)a0;
- (void)trackClientShowForOtherEvents;
- (void)trackCellAdShowWithAweme:(id)a0;
- (void)trackCellPartialShowtimeWithAweme:(id)a0 leaveMethod:(long long)a1;
- (void)trackPartialShowtimeForOtherEvents;
- (BOOL)trackClientClickEnable;
- (void)feedBackLongPressGestureAction:(id)a0;
- (void)configCellWithModel:(id)a0 withIndex:(long long)a1 cellWidth:(double)a2 pageContext:(id)a3;
- (void)onClickWithModel:(id)a0;
- (void)willDisplayWhenDidAppear;
- (BOOL)trackPartialShowtimeEnable;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
