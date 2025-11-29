@interface WCFinderCarouselLogicHelper : NSObject

+ (void)enumerateCarouselTypeWithPriorityUsingBlock:(id /* block */)a0;
+ (BOOL)canShowCarouselWithConfig:(id)a0;
+ (BOOL)canShowHotCommentWithConfig:(id)a0;
+ (BOOL)canShowJumpCarouselGuideWithConfig:(id)a0;
+ (BOOL)canShowMediaCommentWithConfig:(id)a0;
+ (BOOL)canShowMultiImageCommentWithConfig:(id)a0;
+ (BOOL)canShowRingToneGuideWithConfig:(id)a0;
+ (BOOL)_clientCanShowRingtoneGuideWithConfig:(id)a0;
+ (BOOL)enableShowTargetCarouselView:(unsigned long long)a0 logicEnable:(BOOL)a1 checkShowCarouselFlag:(BOOL)a2 config:(id)a3;
+ (unsigned long long)getResultCarouselTypeWithContentVMWithConfig:(id)a0;
+ (unsigned long long)getCurrentCarouselTypeWithContentVMWithConfig:(id)a0;
+ (unsigned long long)getCarouselViewShowTypeWithConfig:(id)a0 checkShowCarouselFlag:(BOOL)a1;

@end
