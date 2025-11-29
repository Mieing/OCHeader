@class UIImage, NSURL, NSString;
@protocol MMDragDelegate;

@interface MMDragManager : NSObject <UIDragInteractionDelegate>

@property (retain, nonatomic) UIImage *dragImage;
@property (retain, nonatomic) NSURL *dragVideoUrl;
@property (nonatomic) int documentType;
@property (weak, nonatomic) id<MMDragDelegate> dragDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemsForSession:(id)a0;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)dragInteraction:(id)a0 sessionDidMove:(id)a1;
- (void).cxx_destruct;

@end
