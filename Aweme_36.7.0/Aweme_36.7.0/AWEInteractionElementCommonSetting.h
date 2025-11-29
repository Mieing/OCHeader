@class NSString;

@interface AWEInteractionElementCommonSetting : NSObject <AWEInteractionElementCommonSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needSafeTimestampIfNeedOfPages:(id)a0;
+ (int)elementCommonBottomOffSet;
+ (id)getFavoriteResourceConfig;


@end
