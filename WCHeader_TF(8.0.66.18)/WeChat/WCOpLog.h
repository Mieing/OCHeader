@interface WCOpLog : NSObject

- (id)init;
- (BOOL)changeStrangerRight:(BOOL)a0 sync:(BOOL)a1;
- (BOOL)changeShowRecent:(int)a0 sync:(BOOL)a1;
- (unsigned int)getRecentHoursForType:(int)a0;
- (BOOL)changeSnsPrivacySetting:(long long)a0 sync:(BOOL)a1 andRecentHours:(unsigned int)a2;
- (BOOL)modSnsBlackList:(id)a0 modType:(long long)a1 syncNow:(BOOL)a2;

@end
