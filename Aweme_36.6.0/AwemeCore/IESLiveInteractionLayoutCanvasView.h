@class IESLiveInteractionLayoutCanvasViewModel, NSArray, NSString, UIView, NSMutableArray, IESLiveCombineSubject;
@protocol IESLiveLinkmicSessionViewProvider;

@interface IESLiveInteractionLayoutCanvasView : HTSEventForwardingView <IESLiveInteractionLayoutCanvas>

@property (retain, nonatomic) IESLiveInteractionLayoutCanvasViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSMutableArray *slotSeperatorsLine;
@property (retain, nonatomic) IESLiveCombineSubject *layoutFinishedSubject;
@property (retain, nonatomic) IESLiveCombineSubject *bindUserListSubject;
@property (weak, nonatomic) id<IESLiveLinkmicSessionViewProvider> sessionViewProvider;
@property (retain, nonatomic) UIView *cameraPreview;
@property (readonly, copy, nonatomic) NSArray *elements;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)updateUIWithOldCellModels:(id)a0 newCellModels:(id)a1;
- (id)generateCellWithViewModel:(id)a0;
- (id)cellWithCellModel:(id)a0;
- (id)anchorCameraPreview;
- (id)onCanvasLayoutFinished:(id /* block */)a0;
- (id)onCanvasBindUserListFinished:(id /* block */)a0;
- (void)hideAnchorContentFor1v6HoriztontalIfNeeded;
- (void)publishCanvasViewLayoutFinished:(id)a0;
- (void)publishCanvasViewBindUserList:(id)a0;
- (void).cxx_destruct;
- (void)setCustomBackgroundView:(id)a0;
- (void)dispose;
- (void)setup;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)clean;

@end
