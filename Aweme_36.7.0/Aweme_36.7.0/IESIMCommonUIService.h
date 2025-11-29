@class NSString;

@interface IESIMCommonUIService : NSObject <IESIMCommonUIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)createDescriptionView;
- (id)createDescriptionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)titleStackViewClass;
- (Class)listHeaderFooterViewClass;
- (id)createNavigationUnreadViewWithSceneType:(long long)a0;
- (id)createNavigationUnreadView;
- (id)createGradientViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)addTopGradientViewForView:(id)a0 fromColor:(id)a1 toColor:(id)a2 height:(double)a3;
- (id)addBottomGradientViewForView:(id)a0 fromColor:(id)a1 toColor:(id)a2 height:(double)a3;
- (void)addDifferentCornerRadiusToView:(id)a0 forLeftTop:(double)a1 leftBottom:(double)a2 rightTop:(double)a3 rightBottom:(double)a4;
- (id)createAICloneAvatarViewWithAvatarHeight:(double)a0 tagHeight:(double)a1;
- (id)createGradientView;
- (id)colorWithIMName:(unsigned long long)a0 alpha:(double)a1;
- (id)createActionSheetViewWithItemModels:(id)a0;
- (id)createVoipPopConfirmContentView;
- (id)createWordAnimationViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createTitleStackView;
- (id)createListHeaderFooterView;
- (id)createMessageVCNavigationUnreadView;
- (id)createLocationAnchorViewWithConfig:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
