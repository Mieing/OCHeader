@class NSString, CADisplayLink, UIView, NSMutableArray;
@protocol MMFinderLiveReplayBarrageViewDelegate;

@interface MMFinderLiveReplayBarrageView : UIView <MMMenuControllerExt>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *trackTailViews;
@property (retain, nonatomic) NSMutableArray *commentItems;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (retain, nonatomic) UIView *selectBgView;
@property (weak, nonatomic) id<MMFinderLiveReplayBarrageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })labelSizeWithText:(id)a0;
- (id)labelFont;
- (void)start;
- (void)pause;
- (void)stop;
- (void)clear;
- (void)addCommentItems:(id)a0;
- (void)pauseLayer:(id)a0;
- (void)resumeLayer:(id)a0;
- (void)addAnimationForView:(id)a0;
- (void)onDisplayLinkFired:(id)a0;
- (void)didTap:(id)a0;
- (void)onReport:(id)a0;
- (void)showOperationMenuForView:(id)a0;
- (BOOL)isShowingOperationMenu;
- (void)hideOperationMenu;
- (void)onMenuControllerDidHide;
- (void).cxx_destruct;

@end
