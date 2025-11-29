@interface ASSApplistModel : NSObject

+ (void)clearSetting;
+ (void)initializeSettings;
+ (void)saveSetting;
+ (BOOL)isInRequest;
+ (id)getAppSchemeVersion;
+ (void)setAppSchemeVersion:(id)a0;
+ (void)setInRequest:(BOOL)a0;
+ (id)getAppSchemeList;
+ (void)setAppSchemeList:(id)a0;

@end
