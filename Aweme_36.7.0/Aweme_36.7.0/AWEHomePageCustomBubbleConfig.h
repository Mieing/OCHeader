@class UIColor;

@interface AWEHomePageCustomBubbleConfig : NSObject

@property (retain, nonatomic) UIColor *darkBGColor;
@property (retain, nonatomic) UIColor *lightBGColor;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (copy, nonatomic) id /* block */ performVisualEffectShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performVisualEffectHideAnimationBlock;
@property (nonatomic) BOOL duxPopoverUse12pxRadius;

- (void).cxx_destruct;

@end
