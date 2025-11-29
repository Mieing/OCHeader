@interface AWEIMLiveGroupAnnouncementUtility : NSObject

+ (id)timeTextFromTimeStampInLongLong:(long long)a0;
+ (void)awe_clearLiveAnnouncementInfo:(id)a0;
+ (id)awe_liveAnnouncementStatusInfo:(id)a0;
+ (void)setAwe_liveAnnouncementStatusInfo:(id)a0 msg:(id)a1;
+ (id)dateFormatter;
+ (id)timeFormatter;

@end
