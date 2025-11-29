@interface AWERecordBeautyGuideBubbleManager : NSObject

+ (BOOL)isEnableStyleItemGuideBubbleShowStatus;
+ (id)styleItemGuideBubbleContent;
+ (double)styleItemGuideBubbleAutoDismissTime;
+ (double)styleItemGuideBubbleDelayInSecondTime;
+ (void)showStyleItemGuideBubbleInParentView:(id)a0 targetView:(id)a1 hiddenCompleteHandler:(id /* block */)a2;
+ (BOOL)isShowStyleItemGuideBubbleStatus;
+ (void)cacheShowStyleItemGuideBubbleStatus;

@end
