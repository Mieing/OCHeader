@class NSString, UILabel, WCFinderJumpInfoCommentEnhanceBubbleViewModel, UIView;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderJumpInfoCommentEnhanceBubbleView : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>

@property (nonatomic) double containerWidth;
@property (retain, nonatomic) WCFinderJumpInfoCommentEnhanceBubbleViewModel *model;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (weak, nonatomic) id<WCFinderJumpInfoInteractDelegate> interactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)__updateView;
- (void)__updateLayout;
- (void)didTapBackgroundView;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (int)showPosition;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (double)mediaWidth;
- (void).cxx_destruct;

@end
