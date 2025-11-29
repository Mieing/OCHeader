@interface AFDPureModePageComponentFrameHelper : NSObject

@property (nonatomic) double contentVCHeight;
@property (nonatomic) BOOL enableOptTabBarHeight;

+ (double)buttonCenterYOffset;
+ (void)setContentVCHeight:(double)a0;
+ (double)buttonBottomOffset;
+ (double)maxPanHeight;
+ (double)buttonMargin;
+ (double)buttonLeftRightPadding;
+ (double)topButtonMargin;
+ (double)topButtonRightOffset;
+ (double)topButtonTopOffset;
+ (BOOL)enableOptTabBarHeight;
+ (id)sharedHelper;
+ (double)buttonHeight;
+ (double)topButtonHeight;

@end
