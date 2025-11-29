@class NSString, UIImageView, WCFinderJumpInfoCommentFinderVideoViewModel, UILabel;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderJumpInfoCommentFinderVideoView : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>

@property (retain, nonatomic) WCFinderJumpInfoCommentFinderVideoViewModel *model;
@property (retain, nonatomic) UIImageView *videoCover;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (weak, nonatomic) id<WCFinderJumpInfoInteractDelegate> interactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)_updateView;
- (void)_updateLayout;
- (void)didTapConverView;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (int)showPosition;
- (void).cxx_destruct;

@end
