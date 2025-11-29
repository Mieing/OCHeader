@class UIColor, UIView;

@interface AWEDetailTrendBgColorAnimationHelperConfig : NSObject

@property (retain, nonatomic) UIColor *initialColor;
@property (weak, nonatomic) UIView *bgView;
@property (nonatomic) BOOL forbidAnimationOnFirstUpdate;
@property (nonatomic) double duration;

- (void).cxx_destruct;

@end
