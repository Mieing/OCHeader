@class NSString, NSDictionary, IESLiveInnerFeedPlaybackItemModel, UIImageView, UIView, UIViewController;
@protocol IESLivePlaybackRoomViewControllerProtocol, IESHYContainerProtocol;

@interface IESLiveInnerFeedPlaybackCell : UICollectionViewCell <IESLivePlaybackRoomViewControllerDelegate, IESLiveInnerFeedCellProtocol>

@property (retain, nonatomic) IESLiveInnerFeedPlaybackItemModel *itemModel;
@property (nonatomic) BOOL isMounted;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIViewController<IESLivePlaybackRoomViewControllerProtocol> *videoController;
@property (retain, nonatomic) UIImageView *playerCoverImageView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) UIView *toolbarHolderView;
@property (copy, nonatomic) id /* block */ hiddenLynxViewBlock;
@property (copy, nonatomic) id /* block */ hiddenCoverViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithItemModel:(id)a0;
- (void)didEndDisplayCell;
- (void)mountCell;
- (void)unMountCell:(long long)a0;
- (BOOL)isInShowEventWhiteList;
- (id)attachedViewController;
- (BOOL)p_usePadNewStyle;
- (BOOL)p_isLandspaceStyle;
- (id)p_createTrackParamWithItem:(id)a0;
- (void)updateBackgroundByItem:(id)a0;
- (void)onPlayStalledEnd;
- (void)onPlayRenderStart;
- (void)p_trackShowIfNeed;
- (id)p_lynxURL;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisplayCell;
- (void)buildView;

@end
