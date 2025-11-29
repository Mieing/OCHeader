@class NSArray, AWEInteractionExtraModel;

@interface AWEFeedPropsStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (retain, nonatomic) AWEInteractionExtraModel *extraModel;
@property (retain, nonatomic) NSArray *locationModels;

+ (BOOL)canDisplaySticker:(id)a0;

- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)getPropParams;
- (id)p_currentLocationModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_locationInContainer:(id)a0;
- (void)trackPropsStickerClick;
- (void)handlePropsBubbleClicked;
- (void)stickerFunctionTracker:(id)a0 label:(id)a1 url:(id)a2;
- (id)adTasks;
- (void)trackBubbleClickWithAdTaskType:(long long)a0;
- (BOOL)adValid;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;

@end
