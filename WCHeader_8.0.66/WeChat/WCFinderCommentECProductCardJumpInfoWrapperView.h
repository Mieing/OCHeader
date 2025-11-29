@class NSString, WCFinderCommentECProductCardView;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderCommentECProductCardJumpInfoWrapperView : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>

@property (nonatomic) double containerWidth;
@property (retain, nonatomic) WCFinderCommentECProductCardView *productCard;
@property (weak, nonatomic) id<WCFinderJumpInfoInteractDelegate> interactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupView;
- (void)_updateLayout;
- (void)didTapCard;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (int)showPosition;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void).cxx_destruct;

@end
