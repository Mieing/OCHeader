@class IESECListKitListUpdater, NSString, NSTimer, IESECListKitItemDataModel, IESECMallVideoPlayerWrapper, UICollectionViewCell, IESECMallNativeCardActionHandler;
@protocol IESECMallCollectionCellPlayerContainer;

@interface IESECMallVideoCardCellController : NSObject <IESECMallVideoPlayerWrapperDelegate, IESECListKitCellControllerProtocol>

@property (copy, nonatomic) id /* block */ playCompleteBlock;
@property (retain, nonatomic) IESECMallNativeCardActionHandler *actionHandler;
@property (nonatomic) BOOL ecomMallReduceRecommendInfo;
@property (weak, nonatomic) IESECMallVideoPlayerWrapper *videoPlayer;
@property (weak, nonatomic) UICollectionViewCell<IESECMallCollectionCellPlayerContainer> *playingCell;
@property (retain, nonatomic) UICollectionViewCell<IESECMallCollectionCellPlayerContainer> *transitionCell;
@property (copy, nonatomic) NSString *transitionRoomID;
@property (copy, nonatomic) id /* block */ playCompleted;
@property (nonatomic) double playStartTime;
@property (nonatomic) double playEndTime;
@property (retain, nonatomic) NSTimer *autoPlayTimer;
@property (nonatomic) double autoPlayDuration;
@property (nonatomic) double mallIPadSizeScale;
@property (nonatomic) BOOL mallFixAutoplay;
@property (nonatomic) BOOL sendGYLCardClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (id)playerManager;
- (void)didError:(id)a0;
- (id)zoomTransitionStartViewToInner:(BOOL)a0;
- (double)ipadSizeScale;
- (BOOL)zoomOuterWithShrink;
- (double)transitionCornerRadius;
- (void)videoReadyToDisplay;
- (void)videoDidStop;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)mediaPlayerPlayWithAutoPlayDuration:(double)a0 autoPlayManager:(id)a1 completeBlock:(id /* block */)a2;
- (void)updateBorderRadius;
- (void)mediaPlayerPause;
- (void)enterWithRouterParams:(id)a0 cell:(id)a1;
- (double)calculateContentHeight:(double)a0 scale:(double)a1;
- (void)endAutoPlayTimer;
- (void)updateActionHandler;
- (void)reportFeedbackClickBtm:(id)a0 feedback:(id)a1;
- (void)reportFeedbackShowBtm:(id)a0;
- (void)getAndSetFeedbackParams:(id)a0;
- (void)reportFeedbackCloseBtm:(id)a0 closeType:(long long)a1;
- (void)reportPlayerPlayResult:(id)a0 model:(id)a1;
- (BOOL)canPlayWithSecondCard;
- (void)setVoiceMute:(BOOL)a0;
- (void)reportPlayerPlayResult:(BOOL)a0 error:(id)a1;
- (void)beginAutoPlayTimer;
- (BOOL)getGlobalGreyMode;
- (BOOL)getGlobalRevetColorful;
- (void)updatePlayerCellWithVideoData:(id)a0 trackParams:(id)a1 cell:(id)a2 autoPlayDuration:(double)a3 completeBlock:(id /* block */)a4;
- (void)stopVideoCell;
- (void)stopVideoCellAndPlayNext:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopVideo;

@end
