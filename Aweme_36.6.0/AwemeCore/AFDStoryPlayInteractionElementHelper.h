@interface AFDStoryPlayInteractionElementHelper : NSObject

+ (BOOL)isSmallDeviceWidth;
+ (BOOL)enableTagViewAlwaysSlide;
+ (double)getElementRightOffset:(unsigned long long)a0 withAweme:(id)a1;
+ (double)feedButtonImageWidth;
+ (double)feedButtonLabelTopOffset;
+ (double)feedButtonLabelHeight;
+ (BOOL)useLabelledFeedVideoButton;
+ (void)configStoryInteractionButton:(id)a0;
+ (id)flatStyleIconLabel;
+ (BOOL)shouldShowStoryInteractionShareOrSendMessageButton:(id)a0;
+ (BOOL)canShowMusicElementWithAweme:(id)a0;
+ (double)elementGapValueWithAweme:(id)a0;
+ (double)elementTrailingPaddingValue:(unsigned long long)a0 aweme:(id)a1;
+ (BOOL)shouldShowStoryInteractionShareBottomButtonWithAweme:(id)a0;
+ (BOOL)shouldShowStoryInteractionSendMessageBottomButtonWithAweme:(id)a0;

@end
