@class HunterDynamicPatchModel, NSString, UIView, ACCDisplayStickerConfig, AWEInteractionStickerModel;
@protocol HunterContainerProtocol, ACCStickerContainerProtocol;

@interface ACCStickerLynxContentView : UIView <HunterContainerLifeCycleProtocol, ACCStickerEditContentProtocol, ACCStickerContentDisplayProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (retain, nonatomic) ACCDisplayStickerConfig *config;
@property (retain, nonatomic) AWEInteractionStickerModel *stickerModel;
@property (retain, nonatomic) HunterDynamicPatchModel *patchModel;
@property (nonatomic) BOOL didUpdated;
@property (nonatomic) double startTimestamp;
@property (retain, nonatomic) AWEInteractionStickerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (BOOL)isNonPostscript:(id)a0;
- (id)initWithStickerModel:(id)a0;
- (void)loadStickerViewWithAweme:(id)a0 containerView:(id)a1 stickerContainer:(id)a2 config:(id)a3 interactionModel:(id)a4;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
