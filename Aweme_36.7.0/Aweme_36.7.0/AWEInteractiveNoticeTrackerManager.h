@interface AWEInteractiveNoticeTrackerManager : NSObject

+ (void)postTrackerEvent:(id)a0 withParams:(id)a1;
+ (void)postCombineEvent:(id)a0 withParams:(id)a1;
+ (void)p_trackEvent:(id)a0 withParams:(id)a1;
+ (void)p_trackLog:(id)a0 withParams:(id)a1;
+ (id)p_getStringFromDictionary:(id)a0 needBrace:(BOOL)a1;
+ (id)p_getStringFromArray:(id)a0;
+ (void)postLogEvent:(id)a0 withParams:(id)a1;

@end
