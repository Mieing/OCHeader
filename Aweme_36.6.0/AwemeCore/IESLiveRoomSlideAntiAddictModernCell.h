@class IESLiveFeedAntiAddictModel, NSString, IESLiveInnerFeedAntiAddictCardItemModel, UIViewController;
@protocol IESLiveFeedAntiAddictMaskViewControllerWrapper;

@interface IESLiveRoomSlideAntiAddictModernCell : UICollectionViewCell <IESLiveFeedAntiAddictMaskViewControllerWrapperDelegate, IESLiveInnerFeedCellProtocol>

@property (retain, nonatomic) IESLiveInnerFeedAntiAddictCardItemModel *itemModel;
@property (retain, nonatomic) IESLiveFeedAntiAddictModel *model;
@property (nonatomic) BOOL isMounted;
@property (retain, nonatomic) id<IESLiveFeedAntiAddictMaskViewControllerWrapper> videoPlayer;
@property (weak, nonatomic) UIViewController *parentVC;
@property (nonatomic) long long index;
@property (readonly, nonatomic) UIViewController *attachedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)trackShow;
- (id)antiAddictType;
- (void)updateWithItemModel:(id)a0;
- (void)didEndDisplayCell;
- (void)addChildVC;
- (void)removeChildVC;
- (void)wrapper:(id)a0 didTrackStayTimeWithParams:(id)a1;
- (void)wrapper:(id)a0 didTrackClickWithParams:(id)a1;
- (void)mountCell;
- (void)unMountCell:(long long)a0;
- (id)attachedViewController;
- (void)didAppearIsDraw:(BOOL)a0 player:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didDisappear;
- (void)reset;
- (void)willDisplayCell;

@end
