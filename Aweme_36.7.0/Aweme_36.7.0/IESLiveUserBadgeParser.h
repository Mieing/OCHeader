@interface IESLiveUserBadgeParser : NSObject

+ (id)parseUserBadgeInfo:(id)a0 withAppInfo:(id)a1;
+ (id)accessibilityStringFromBadgeList:(id)a0;
+ (id)badgeAttributedStringFromBadgeImages:(id)a0 withAlignFontSize:(double)a1 scale:(double)a2;
+ (id)executeDSLBadgeLists:(id)a0 withAppInfo:(id)a1;
+ (id)imageFromBadgeLiveImage:(id)a0;
+ (BOOL)executeDSLRule:(id)a0 withAppInfo:(id)a1;
+ (id)saas_badgeAttributedStringFromBadgeImages:(id)a0 withAlignFontSize:(double)a1 scale:(double)a2;

@end
