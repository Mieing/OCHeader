@class UIView, IESECWinContext, IESECWinMultipleFunctionsFollowViewModel, UIImageView, IESECWinNavObject, IESECRelationMultipleFunctionsFollowView, CAGradientLayer, FBKVOController, UILabel, IESECServiceProxy;
@protocol IESECFansClubService, IESECWinAuthorService;

@interface IESECWinNavAuthorBar : UIView {
    IESECWinContext *_context;
}

@property (retain, nonatomic) UIView *avatarBgView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) IESECRelationMultipleFunctionsFollowView *followView;
@property (retain, nonatomic) IESECWinMultipleFunctionsFollowViewModel *followViewModel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarDiffFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } followDiffFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleDiffFrame;
@property (retain, nonatomic) CAGradientLayer *fixedLayer;
@property (retain, nonatomic) CAGradientLayer *animationLayer;
@property (retain, nonatomic) CAGradientLayer *followGradientLayer;
@property (nonatomic) BOOL isAnimation;
@property (retain, nonatomic) IESECWinNavObject *object;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECServiceProxy<IESECFansClubService> *fansClubService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (copy, nonatomic) id /* block */ enterLiveRoomBlock;

- (id)createLayer;
- (void)enterLiveRoom;
- (void)switchFollowViewMode:(unsigned long long)a0;
- (void)updateWithObject:(id)a0;
- (void)p_bindViewModel:(id)a0;
- (BOOL)needShowFollowButton;
- (void)setViewsAlpha:(double)a0;
- (void)updateOriginAvatarLayoutWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 barTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateScrollAvatarLayoutWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alpha:(double)a1;
- (void)updateOriginFollowLayoutWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 barTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateScrollFollowLayoutWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alpha:(double)a1;
- (void)updateOriginTitleLayoutWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 barTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateScrollTitleLayoutWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alpha:(double)a1;
- (void)avatarImageViewTapped;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
