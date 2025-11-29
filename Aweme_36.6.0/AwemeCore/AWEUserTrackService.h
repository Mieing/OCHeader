@interface AWEUserTrackService : NSObject

+ (void)profileTabSessionInfo:(id)a0 tabLogName:(id)a1 secondTabLogName:(id)a2 maxItem:(long long)a3 isSelf:(BOOL)a4 ext:(id)a5;
+ (void)profileTabLoadMonitorWithConfig:(id)a0;
+ (void)profileTabErrorMonitorWithConfig:(id)a0;
+ (void)trackImageLoadResult:(id)a0 url:(id)a1 error:(id)a2 extra:(id)a3 profileContext:(id)a4;
+ (void)profileEnterErrorMonitorWithConfig:(id)a0;
+ (void)profileTabStayDuration:(long long)a0 firstTabName:(id)a1 secondTabName:(id)a2 enterFrom:(id)a3;
+ (id)p_commonParams:(id)a0 enterFrom:(id)a1 isSelf:(BOOL)a2;

@end
