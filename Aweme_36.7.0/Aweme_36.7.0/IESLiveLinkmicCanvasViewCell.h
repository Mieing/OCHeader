@class IESLiveLinkmicCanvasViewCellModel, NSString, UIView;
@protocol IESLiveInteractUserModel, IESLiveLinkmicCanvasElementDelegate, IESLiveLinkmicSessionViewProvider;

@interface IESLiveLinkmicCanvasViewCell : UIView <IESLiveLinkmicCanvasElement>

@property (retain, nonatomic) IESLiveLinkmicCanvasViewCellModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *mediaContainer;
@property (retain, nonatomic) UIView *sessionView;
@property (weak, nonatomic) id<IESLiveLinkmicSessionViewProvider> sessionViewProvider;
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
- (void).cxx_destruct;
- (void)setup;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
