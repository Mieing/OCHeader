@class UIColor, NSArray, DUXAvatarUIConfigModel, NSMutableArray;

@interface DUXPluralAvatar : UIView <IESLivePluralAvatarView>

@property (retain, nonatomic) NSMutableArray *backgroundViews;
@property (retain, nonatomic) DUXAvatarUIConfigModel *uiConfig;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long sizeStyle;
@property (retain, nonatomic) UIColor *avatarPaddingColor;
@property (copy, nonatomic) NSArray *avatars;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) BOOL isAvatarCropped;
@property (nonatomic) unsigned long long enlargeType;

- (void)ieslive_setFirstImage:(id)a0 imageURL:(id)a1;
- (void)ieslive_setSecondImage:(id)a0 imageURL:(id)a1;
- (id)initWithType:(unsigned long long)a0 sizeStyle:(unsigned long long)a1 avatars:(id)a2 clickAction:(id /* block */)a3;
- (void)didClickAction;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setupGroup;
- (id)initWithType:(unsigned long long)a0 sizeStyle:(unsigned long long)a1 avatars:(id)a2 clickAction:(id /* block */)a3 enlargeType:(unsigned long long)a4;
- (double)intrinsicContentListAdaptiveHeight;
- (double)intrinsicContentListBackgroundHeight;
- (double)intrinsicContentGroupAdaptiveHeight;
- (double)intrinsicContentListHeight;
- (double)intrinsicContentGroupHeight;
- (void)setupList;
- (void)cropIcon:(id)a0 backgroundView:(id)a1 backgroundWidth:(double)a2 xPadding:(double)a3 yPadding:(double)a4;
- (void)addAvatar:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
