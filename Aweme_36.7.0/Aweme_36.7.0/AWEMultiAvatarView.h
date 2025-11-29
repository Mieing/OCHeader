@class AWEURLModel, NSString, NSArray, UIFont, UIView, AWEMultiAvatarOption;

@interface AWEMultiAvatarView : UIView <IESIMMultiAvatarViewProtocol>

@property (nonatomic) double padding;
@property (nonatomic) double borderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) AWEMultiAvatarOption *option;
@property (retain, nonatomic) UIView *firstView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstframe;
@property (retain, nonatomic) UIView *secondView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondframe;
@property (retain, nonatomic) UIView *thirdView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } thirdframe;
@property (retain, nonatomic) AWEURLModel *lastAvatar;
@property (retain, nonatomic) UIFont *moreLabelFont;

+ (struct CGSize { double x0; double x1; })calculateAvatarViewSizeWithCount:(long long)a0 avatarWidth:(double)a1 option:(id)a2;

- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 avatarWidth:(double)a3 needPlaceholder:(BOOL)a4 needRoundRectBg:(BOOL)a5;
- (double)multiAvatarViewWidth;
- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1 option:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setupBGFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1;
- (id)setupUserIconBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 userIcon:(id)a1;
- (id)addIconLayerWithOption:(id)a0;
- (void)addAvatarCountViewOn:(id)a0 count:(long long)a1;
- (BOOL)enableBackupAvatarsSizeCalculated;
- (void)insertWithAvatar:(id)a0 avatarWidth:(double)a1;
- (void)configMoreLabelFont:(id)a0;
- (struct CGSize { double x0; double x1; })multiAvatarViewSize;
- (struct CGSize { double x0; double x1; })multiAvatarViewSizeWithCount:(long long)a0;
- (unsigned long long)multiAvatarViewCount;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 leftCrop:(BOOL)a3 avatarWidth:(double)a4 needPlaceholder:(BOOL)a5 needRoundRectBg:(BOOL)a6 isLeftOnTop:(BOOL)a7;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 leftCrop:(BOOL)a3 avatarWidth:(double)a4 needPlaceholder:(BOOL)a5 needRoundRectBg:(BOOL)a6 isLeftOnTop:(BOOL)a7 hasMoreAvatarCount:(long long)a8 padding:(double)a9 boardWidth:(double)a10;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 leftCrop:(BOOL)a3 avatarWidth:(double)a4 needPlaceholder:(BOOL)a5 needRoundRectBg:(BOOL)a6 isLeftOnTop:(BOOL)a7 hasMoreAvatarCount:(long long)a8 padding:(double)a9 boardWidth:(double)a10 customLayerCenter:(BOOL)a11;
- (id)addIconLayer:(BOOL)a0;
- (id)addIconLayerInRight;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 avatarWidth:(double)a3 needPlaceholder:(BOOL)a4;
- (void).cxx_destruct;

@end
