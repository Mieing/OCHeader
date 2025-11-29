@class NSString, IESLiveInteractionLayoutCanvasCellModel, HTSEventForwardingView, UIView, IESLiveInteractionLayoutSlot;
@protocol IESLiveInteractUserModel, IESLiveLinkmicCanvasElementDelegate, IESLiveLinkmicSessionViewProvider;

@interface IESLiveInteractionLayoutCanvasCell : HTSEventForwardingView <IESLiveInteractionLayoutCanvasElement>

@property (weak, nonatomic) id<IESLiveLinkmicSessionViewProvider> sessionViewProvider;
@property (retain, nonatomic) IESLiveInteractionLayoutCanvasCellModel *viewModel;
@property (retain, nonatomic) HTSEventForwardingView *contentView;
@property (retain, nonatomic) HTSEventForwardingView *mediaContainer;
@property (retain, nonatomic) UIView *sessionView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredSessionFrame;
@property (readonly, nonatomic) IESLiveInteractionLayoutSlot *slot;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> user;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (weak, nonatomic) id<IESLiveLinkmicCanvasElementDelegate> delegate;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)updateViewModel:(id)a0;
- (void)insertSessionView:(id)a0;
- (void)layoutSessionViewIfNeeded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
