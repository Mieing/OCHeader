@interface IESGCPLynxSourceCheckUtil : NSObject

+ (BOOL)geckoResourceNeedUpdateWithURL:(id)a0;
+ (id)getSettingCheckModelWithURL:(id)a0;
+ (id)getServerURLCheckModelWithURL:(id)a0;
+ (void)reportCustomTrackEventWithUrl:(id)a0 needUpdate:(BOOL)a1 andRequireMinVersion:(id)a2;

@end
