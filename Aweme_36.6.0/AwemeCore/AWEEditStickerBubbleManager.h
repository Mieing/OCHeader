@class NSString, AWEEditStickerBubbleView, NSArray;

@interface AWEEditStickerBubbleManager : NSObject <AWEEditStickerBubbleProtocol>

@property (retain, nonatomic) AWEEditStickerBubbleView *bubble;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ defaultTargetView;
@property (copy, nonatomic) id /* block */ getParentViewActualFrameBlock;
@property (nonatomic, getter=isBubbleVisible) BOOL bubbleVisible;
@property (nonatomic) unsigned long long arrowDirection;
@property (copy, nonatomic) NSArray *bubbleItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithName:(id)a0;
+ (id)videoStickerBubbleManager;
+ (id)interactiveStickerBubbleManager;
+ (id)textStickerBubbleManager;
+ (id)sharedManager;

- (void)setBubbleVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)bubbleItems;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 touchPoint:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 inParentView:(id)a3;
- (void)setBubbleItems:(id)a0;
- (void)setBubbleVisible:(BOOL)a0;
- (void)p_notifyBubbleVisibleDidChanged;
- (void).cxx_destruct;
- (void)destroy;
- (void)setArrowDirection:(unsigned long long)a0;
- (unsigned long long)arrowDirection;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)update;

@end
