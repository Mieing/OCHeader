@interface AWEProfileSchoolOfflineHelper : NSObject

+ (BOOL)enableSchoolEditTextGrey;
+ (BOOL)enableSchoolEditEntrance;
+ (id)schoolEditPageTips;
+ (BOOL)tipsDidShow;
+ (id)schoolEditPageTipsShowStorageKey;
+ (BOOL)disableSchoolEditPageInteraction;
+ (void)recordSchoolEditPageTipsShow;
+ (id)user;

@end
