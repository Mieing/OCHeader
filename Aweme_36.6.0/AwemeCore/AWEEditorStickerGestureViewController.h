@class UIGestureRecognizer, ACCPIPInteractionContainerView, NSString, UIView, ACCStickerContainerView, NSMutableArray;
@protocol AWEEditorStickerGestureViewControllerDelegate, ACCAIGCUnifyLoadingViewProtocol;

@interface AWEEditorStickerGestureViewController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) long long gestureActiveStatus;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *previousSelectViewForTap;
@property (weak, nonatomic) UIView *previousTargetViewForPinch;
@property (weak, nonatomic) UIView *previousTargetViewForRotate;
@property (nonatomic) BOOL gestureResponsed;
@property (nonatomic) BOOL globalResponsed;
@property (retain, nonatomic) NSMutableArray *outerIgnoredGestureRecognizerList;
@property (copy, nonatomic) id /* block */ gestureStartBlock;
@property (copy, nonatomic) id /* block */ stickerGestureBlock;
@property (weak, nonatomic) id<AWEEditorStickerGestureViewControllerDelegate> delegate;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) ACCStickerContainerView *globalStickerContainerView;
@property (retain, nonatomic) UIView<ACCAIGCUnifyLoadingViewProtocol> *templateUnifyLoadingView;
@property (weak, nonatomic) ACCPIPInteractionContainerView *pipContainerView;
@property (retain, nonatomic) UIGestureRecognizer *editScrollViewGestureRecognizer;
@property (copy, nonatomic) id /* block */ tapToTextEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (void)panAction:(id)a0;
- (void)stickerTransformTriggered;
- (void)addOuterIgnoredGestureRecognizer:(id)a0;
- (void)pinchAction:(id)a0;
- (void)rotationAction:(id)a0;
- (void)removeOuterIgnoredGestureRecognizer:(id)a0;
- (id)hitTargetStickerWithGesture:(id)a0 deSelected:(BOOL)a1;
- (id)currentStickerContainer;
- (BOOL)shouldPassTapGestureToAITemplateLoadingView:(id)a0;
- (id)hitTargetStickerWithGesture:(id)a0;
- (BOOL)startGestureOnView:(id)a0;
- (void)pipContainerHandleGestureIfNeeded:(id)a0;
- (id)hitTargetStickerWithGesture:(id)a0 deSelected:(BOOL)a1 dispatchGestureEventFlow:(BOOL)a2;
- (BOOL)isOuterIgnoredGestureRecognizer:(id)a0;
- (BOOL)unSelectedSticker:(id)a0 supportGestureRecognizer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculate4_3SizeFrameForContainer;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;
- (void)tapAction:(id)a0;

@end
