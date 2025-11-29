@class NSString;

@interface AWESearchScanCircleSearchHelper : NSObject

@property (nonatomic) BOOL hitWhiteList;
@property (copy, nonatomic) NSString *searchFrom;

+ (BOOL)enableClickBorder;
+ (BOOL)enableDrawCircle;
+ (BOOL)enableRectDrag;
+ (double)circleSearchBorderMinWidth;
+ (double)circleSearchPathWidth;
+ (id)circleSearchPathColor;
+ (id)circleSearchCursorImage;
+ (id)circleSearchRectImage;
+ (BOOL)enableWholeRectDrag;
+ (double)circleSearchBorderInnerPadding;
+ (double)circleSearchBorderOutterPadding;
+ (id)circleSearchGuideCircleAndClickText:(long long)a0;
+ (double)clickBorderMinWidth;
+ (BOOL)disableBorderAndPoint;
+ (BOOL)impEnableClickBorder;
+ (BOOL)impEnableDrawCircle;
+ (BOOL)impDisableBorderAndPoint;
+ (BOOL)isCircleMode;
+ (BOOL)impEnableRectDrag;
+ (BOOL)impEnableWholeRectDrag;
+ (BOOL)impEnableBackOpt;
+ (double)impCircleSearchPathWidth;
+ (id)impCircleSearchPathColor;
+ (double)impCircleSearchPathRadius;
+ (id)impCircleSearchCursorImage;
+ (id)impCircleSearchRectImage;
+ (double)impCircleSearchBorderInnerPadding;
+ (double)impCircleSearchBorderOutterPadding;
+ (id)impCircleSearchBorderColor;
+ (double)impCircleSearchBorderRadius;
+ (double)impCircleSearchBorderMinWidth;
+ (double)impCircleSearchPathAnimationDuration;
+ (double)impCircleSearchRectAnimationDuration;
+ (long long)impCircleSearchGuideTimesCircleEditPage;
+ (long long)impCircleSearchGuideTimes;
+ (double)impCircleSearchGuideDurationCircleEditPage;
+ (double)impCircleSearchGuideDuration;
+ (id)impCircleSearchGuideClickTextCircleEditPage;
+ (id)impCircleSearchGuideClickText;
+ (id)impCircleSearchGuideCircleTextCircleEditPage;
+ (id)impCircleSearchGuideCircleText;
+ (id)impCircleSearchGuideCircleAndClickTextCircleEditPage;
+ (id)impCircleSearchGuideCircleAndClickText;
+ (BOOL)enableBackOpt;
+ (double)clickBorderDefaultWidth;
+ (double)circleSearchPathRadius;
+ (id)circleSearchBorderColor;
+ (double)circleSearchBorderRadius;
+ (double)circleSearchPathAnimationDuration;
+ (double)circleSearchRectAnimationDuration;
+ (long long)circleSearchGuideTimes:(long long)a0;
+ (double)circleSearchGuideDuration:(long long)a0;
+ (id)circleSearchGuideClickText:(long long)a0;
+ (id)circleSearchGuideCircleText:(long long)a0;
+ (BOOL)impCircleSearchUseCurveBezier;
+ (BOOL)impCircleSearchUseAntialias;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
