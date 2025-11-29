@class NSNumber, NSString, HTSEventForwardingView, IESLiveMultiKTVDraggedContainerView, UIPanGestureRecognizer;
@protocol IESLiveRoomService, IESLiveMultiKTVAudioStageContainerDelegate;

@interface IESLiveMultiKTVAudioStageContainerView : HTSEventForwardingView <IESLiveMultiKTVStageViewProtocol>

@property (retain, nonatomic) HTSEventForwardingView *backgroundContainer;
@property (retain, nonatomic) HTSEventForwardingView *dynamicKTVContainer;
@property (retain, nonatomic) HTSEventForwardingView *contentContainer;
@property (retain, nonatomic) HTSEventForwardingView *midiContainer;
@property (retain, nonatomic) IESLiveMultiKTVDraggedContainerView *draggedContainer;
@property (retain, nonatomic) HTSEventForwardingView *profileContainer;
@property (retain, nonatomic) HTSEventForwardingView *titleContainer;
@property (retain, nonatomic) UIPanGestureRecognizer *draggedGesture;
@property (retain, nonatomic) NSNumber *audioStageViewHidden;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveMultiKTVAudioStageContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentHeight;

- (void)updateStatusBarBackgroundColor:(id)a0;
- (double)bottomLimit;
- (void)updateSoundAnimationWithStartURLs:(id)a0 loopURLs:(id)a1;
- (void)updateFanticketAreaHidden:(BOOL)a0;
- (void)updateStageViewBackgroundImageWithImageURLs:(id)a0;
- (void)updateGrabSongBackgroundImageUrls:(id)a0;
- (void)updateSingBtnBackgroundGradientColorWithStartColor:(id)a0 endColor:(id)a1;
- (id)stageSnapshotImage;
- (void)updateVideoStyleLayout:(long long)a0;
- (void)updatePlayerViewAppearanceAsVideoStyleChanged:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateThemeID:(id)a0;
- (void)setupSubContainers:(BOOL)a0;
- (void)setupSubContainers;
- (double)topLimit;
- (void)updateDraggedContainerConstraintsWithCenterY:(double)a0;
- (void)updateStageViewBackgroundImage:(id)a0;
- (void)panGestureClick:(id)a0;
- (void)iPadRotatingToLandscape:(BOOL)a0;
- (void)updateDraggedContainerHeightWithScale:(double)a0;
- (void)updateDraggedContainerInteractionEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 room:(id)a2 basicInfo:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
