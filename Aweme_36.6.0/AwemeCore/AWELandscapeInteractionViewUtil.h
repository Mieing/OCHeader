@class NSString;

@interface AWELandscapeInteractionViewUtil : NSObject <AWELandscapeInteractionViewUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bottomContainerHeight;
+ (double)topBackButtonWidth;
+ (double)horizonOffset;
+ (BOOL)shouldShowMixButtonWithModel:(id)a0;
+ (double)feedShareHorizonOffsetWithModel:(id)a0;
+ (double)progressSliderHeight;
+ (double)progressSliderTopOffset;
+ (double)progressSliderBottomOffset;
+ (double)bottomContainerOffset;
+ (double)gradientViewHeight;
+ (id)shadowStartColor;
+ (double)videoHorizonOffset;
+ (double)progressSliderAndTimeLabelSpace;
+ (struct CGSize { double x0; double x1; })screenPlayButtonSize;
+ (double)statusBarHeight;
+ (double)topOffset;


@end
