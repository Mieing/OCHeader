@class ACCAEVideoThumbPreviewView, NSMutableDictionary;
@protocol ACCAdvanceEditPageService, ACCAEViewContainerProtocol;

@interface ACCAEVideoThumbTransitionAnimator : NSObject

@property (weak, nonatomic) ACCAEVideoThumbPreviewView *previewView;
@property (retain, nonatomic) NSMutableDictionary *originFrameDict;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> container;
@property (weak, nonatomic) id<ACCAdvanceEditPageService> pageService;

- (id)initWithPreviewView:(id)a0;
- (void)coverTimelineView;
- (void)prepareForShowAnimation;
- (void)doShowAnimation;
- (void)showAnimationDidComplete;
- (void)uncoverTimelineView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showAnimated:(BOOL)a0;

@end
