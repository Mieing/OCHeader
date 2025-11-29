@interface AWENearbyUndertakeGuideBubble : NSObject

+ (void)showUnderTakeBubbleIfNeedWithEnterBubble:(id)a0 pageType:(long long)a1;
+ (void)showDialogClickedBubbleIfNeedWithEnterBubble:(id)a0 pageType:(long long)a1;
+ (void)shouldShowUndertakeBubbleWithPageType:(long long)a0;
+ (id)getUndertakeEnterBubbleWithPageType:(long long)a0;
+ (void)updateNeedShowDialogClickBubble:(BOOL)a0;
+ (BOOL)getNeedShowDialogClickBubble;
+ (id)transformGuideBubbleWithEnterBubble:(id)a0;
+ (BOOL)shouldShowTabGuideBubbleWithBubbleModel:(id)a0 triggerType:(long long)a1;
+ (void)doShowBubbleWithEnterBubble:(id)a0 pageType:(long long)a1;
+ (void)updateBubbleFrequencyKeyWithBubbleModel:(id)a0;
+ (void)p_doShowBubbleWithGeneralBubble:(id)a0 pageType:(long long)a1;
+ (void)showTaskBubbleWithEnterBubble:(id)a0 pageType:(long long)a1;

@end
