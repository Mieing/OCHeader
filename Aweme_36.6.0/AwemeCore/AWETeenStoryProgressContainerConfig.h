@class UIColor;

@interface AWETeenStoryProgressContainerConfig : NSObject

@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerMargin;
@property (nonatomic) double progressHeight;
@property (nonatomic) double progressMargin;
@property (nonatomic) double progressMinWidth;
@property (nonatomic) long long progressLeftGradientCount;
@property (nonatomic) long long progressRightGradientCount;
@property (nonatomic) BOOL shouldLimitMinWidth;
@property (nonatomic) BOOL forceSlide;
@property (nonatomic) BOOL cannotShowGradient;

- (void).cxx_destruct;
- (id)init;

@end
