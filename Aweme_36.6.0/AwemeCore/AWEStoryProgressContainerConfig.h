@class UIColor, NSNumber, NSArray;

@interface AWEStoryProgressContainerConfig : NSObject

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) BOOL useAutoLayout;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerMargin;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL clickDisable;
@property (nonatomic) double progressHeight;
@property (nonatomic) double progressMargin;
@property (nonatomic) double progressMinWidth;
@property (nonatomic) long long progressLeftGradientCount;
@property (nonatomic) long long progressRightGradientCount;
@property (nonatomic) BOOL shouldLimitMinWidth;
@property (nonatomic) BOOL forceSlide;
@property (nonatomic) BOOL cannotShowGradient;
@property (nonatomic) BOOL notRespondToTap;
@property (nonatomic) long long progressType;
@property (nonatomic) BOOL needBlurBackground;
@property (retain, nonatomic) NSNumber *dotMaxSize;
@property (retain, nonatomic) NSNumber *dotMidSize;
@property (retain, nonatomic) NSNumber *dotLongSelectedSizeWidth;
@property (nonatomic) BOOL isViewInVisible;
@property (nonatomic) BOOL isHideSlideView;
@property (copy, nonatomic) NSArray *animateResourceList;
@property (readonly, nonatomic) BOOL supportLongPressProgress;
@property (nonatomic) BOOL shouldAdjustAnimation;

- (void).cxx_destruct;
- (id)init;

@end
