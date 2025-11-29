@class IESLiveFeedAntiAddictModel, NSString, IESLiveInnerFeedAntiAddictCardItemModel, UIImageView, IESLiveVideoPlayerController;
@protocol IESLiveFeedAntiAddictClearView;

@interface IESLiveRoomSlideAntiAddictCell : UICollectionViewCell <IESLiveVideoPlayerControllerDelegate, IESLiveFeedAntiAddictClearViewDelegate, IESLiveInnerFeedCellProtocol>

@property (retain, nonatomic) IESLiveInnerFeedAntiAddictCardItemModel *itemModel;
@property (nonatomic) BOOL isMounted;
@property (retain, nonatomic) IESLiveVideoPlayerController *videoPlayer;
@property (retain, nonatomic) IESLiveFeedAntiAddictModel *model;
@property (retain, nonatomic) id<IESLiveFeedAntiAddictClearView> clearView;
@property (retain, nonatomic) UIImageView *blurCoverImageView;
@property (nonatomic) BOOL didTrackStayTime;
@property (nonatomic) double startDisplayTime;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)startPlay;
- (void)trackShow;
- (id)antiAddictType;
- (void)trackStayTime;
- (void)updateWithItemModel:(id)a0;
- (id)playVideoView;
- (void)didEndDisplayCell;
- (id)antiAddictClearViewTitle;
- (id)antiAddictClearViewSubTitle;
- (void)trackUserAction:(id)a0;
- (id)antiAddictClearViewConfirmBtnTitle;
- (void)actionBtnClickedWithType:(long long)a0;
- (BOOL)shouldResponsePlayerClick;
- (void)ignoreBtnClicked;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)mountCell;
- (void)unMountCell:(long long)a0;
- (void)updateWithAntiAddictModel:(id)a0;
- (void)didAppearIsDraw:(BOOL)a0 player:(id)a1;
- (void)p_setUpViews;
- (void)p_updateBlurCover;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applicationWillTerminate;
- (void)didDisappear;
- (void)willDisplayCell;

@end
