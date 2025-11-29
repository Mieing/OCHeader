@interface AWESideBarLynxExitTrackUtil : NSObject

+ (void)loadFailedForBusinessID:(id)a0 reason:(unsigned long long)a1 threshold:(long long)a2;
+ (void)exitForBusinessID:(id)a0 reason:(unsigned long long)a1 threshold:(long long)a2;
+ (void)p_trackWithType:(id)a0 businessID:(id)a1 reason:(unsigned long long)a2 threshold:(long long)a3;
+ (id)exitReasonString:(unsigned long long)a0;

@end
