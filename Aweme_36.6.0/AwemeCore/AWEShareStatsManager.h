@interface AWEShareStatsManager : NSObject

+ (double)p_firstInstallTime;
+ (double)p_actionTime;
+ (void)statsNewShareWithItemID:(id)a0 itemType:(unsigned long long)a1 awemeType:(long long)a2 channelID:(id)a3 extraParams:(id)a4;
+ (void)statsNewShareWithItemID:(id)a0 itemType:(unsigned long long)a1 awemeType:(long long)a2 channelID:(id)a3;

@end
