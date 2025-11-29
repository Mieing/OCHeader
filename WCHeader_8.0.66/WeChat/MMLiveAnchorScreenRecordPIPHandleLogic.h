@class NSString, UIView;

@interface MMLiveAnchorScreenRecordPIPHandleLogic : MMLiveCustomRenderPIPHandleLogic <WCFinderLiveExt>

@property (readonly, nonatomic) BOOL openTestMode;
@property (weak, nonatomic) UIView *attachedGameLiveAccessoryView;
@property (copy, nonatomic) id /* block */ getCustomViewBlock;
@property (copy, nonatomic) id /* block */ getPIPRenderSizeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)onCustomViewAttach:(id)a0;
- (void)onCustomViewDeAttach:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getRenderViewFrame;
- (struct CGSize { double x0; double x1; })getRenderSize;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAbsoluteRenderViewFrame;
- (void)attachContentViewToCustomView:(id)a0;
- (void)deAttachContentViewFromCustomView:(id)a0;
- (id)getGameLiveAccessoryView;
- (void)attachGameLiveAccessoryViewToView:(id)a0;
- (void)deAttachGameLiveAccessoryView;
- (BOOL)enableStartPictureInPicture;
- (id)finderLiveTask;
- (void).cxx_destruct;

@end
