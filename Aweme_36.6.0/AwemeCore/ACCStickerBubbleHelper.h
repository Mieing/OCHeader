@class NSArray, NSString, ACCBaseStickerView, AWEEditStickerBubbleManager;

@interface ACCStickerBubbleHelper : NSObject <ACCStickerBubbleProtocol>

@property (weak, nonatomic) ACCBaseStickerView *stickerView;
@property (retain, nonatomic) NSArray *bubbleActionList;
@property (retain, nonatomic) NSArray *bubbleItems;
@property (retain, nonatomic) AWEEditStickerBubbleManager *bubble;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) BOOL isShowingBubble;
@property (nonatomic) double bubbleStartTime;
@property (copy, nonatomic) id /* block */ didClickItemCompletionWhenShowAutomatically;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBubbleWithTag:(id)a0 title:(id)a1 image:(id)a2;
- (void)showBubbleAtPointAutomatically:(struct CGPoint { double x0; double x1; })a0 lastTime:(double)a1 autoDismissCompletion:(id /* block */)a2;
- (void)_showBubbleMenuAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleContentWhenBubbleChanged:(BOOL)a0;
- (void)_showBubbleMenuAtPoint:(struct CGPoint { double x0; double x1; })a0 autoDismiss:(BOOL)a1;
- (void)hideBubbleMenu:(BOOL)a0;
- (id)bubbleItemWithDYConfig:(id)a0;
- (id)editBubbleItemWithCallback:(id /* block */)a0;
- (id)selectTimeBubbleItemWithCallback:(id /* block */)a0;
- (id)editAutoCaptionsBubbleItemWithCallback:(id /* block */)a0;
- (id)deleteBubbleItemWithCallback:(id /* block */)a0;
- (id)textReadBubbleItemWithCallback:(id /* block */)a0;
- (id)textReadCancelBubbleItemWithCallback:(id /* block */)a0;
- (id)initWithWeakReferenceOfStickerView:(id)a0 bubbleActionList:(id)a1;
- (void)showBubbleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateBubbleActionListIfNeeded:(id)a0;
- (void)onStickerGeometryChanged;
- (BOOL)shouldBubbleDismiss;
- (void).cxx_destruct;
- (void)hideAnimated:(BOOL)a0;
- (void)doDismiss;

@end
