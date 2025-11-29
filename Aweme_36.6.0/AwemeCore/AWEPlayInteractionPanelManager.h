@class NSMutableDictionary, AWEPlayAlbumContentShrinkController, NSString, UIView;

@interface AWEPlayInteractionPanelManager : AWEPlayInteractionBaseController <AWEPlayInteractionPanelManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *panelsDic;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shrinkContainerFrame;
@property (nonatomic) BOOL aiTextPanelshowed;
@property (retain, nonatomic) AWEPlayAlbumContentShrinkController *shrinkController;
@property (nonatomic) double horizontalTopRadio;
@property (retain, nonatomic) UIView *statusBarCoverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShrinkingVideo;
- (void)registerInteractionPanelClass:(id)a0 PanelIdentifier:(id)a1;
- (void)shrinkVideoWhenShowPanelWithIdentifier:(id)a0 animation:(BOOL)a1 targetHeight:(double)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
- (void)shrinkVideoWhenShowPanelWithIdentifier:(id)a0 animation:(BOOL)a1 targetHeight:(double)a2 panelType:(unsigned long long)a3 animations:(id /* block */)a4 completion:(id /* block */)a5;
- (void)magnifyVideoWhenClosePanelWithIdentifier:(id)a0 animated:(BOOL)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)magnifyVideoWhenClosePanelWithIdentifier:(id)a0 animated:(BOOL)a1 panelType:(unsigned long long)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
- (void)moveContentVideoUpWithOffset:(double)a0;
- (void)resizeVideoWhenDragPanel:(double)a0;
- (void)resizeVideoWhenDragPanelForLowPanel:(double)a0;
- (double)getCommonPanelHeight;
- (double)getCommonVideoHeight;
- (BOOL)isPanelInteracting;
- (id)albumShrinkController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixedHeightShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetHeight:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })portraitVideoShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayRatioStrategy:(double)a1 targetHeight:(double)a2;
- (BOOL)commentShrinkVideoIsLandscape;
- (void)shrinkImageAlbumWhenShowPanelWithTargetHeight:(double)a0 panelType:(unsigned long long)a1;
- (BOOL)isAlbumCellShrink;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenDisplayContentRect;
- (void)addStatusBarCoverView;
- (BOOL)enableCloseAlpha;
- (void)magnifyImageAlbumWhenClosePanelWithPanelType:(unsigned long long)a0;
- (void)removeStatusBarCoverView;
- (BOOL)checkIdentifierEffective:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetHeight:(double)a1 panelType:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })portraitVideoShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetHeight:(double)a1 panelType:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })v2PortraitVideoShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayRatioStrategy:(double)a1 targetHeight:(double)a2;
- (id)getPanelControllerWithIdentifierl:(id)a0;
- (BOOL)checkPanelIsShowingWithIdentifierl:(id)a0;
- (void).cxx_destruct;

@end
