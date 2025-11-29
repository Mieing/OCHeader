@interface WxGamePluginUtil : NSObject

+ (BOOL)isWxGameJumpLiteApp;
+ (id)parseWxGameMessageXML:(id)a0 localId:(unsigned int)a1 createTime:(unsigned int)a2 type:(unsigned int)a3;
+ (void)setGamePluginLastMsg:(unsigned int)a0 createTime:(unsigned int)a1 leftCount:(unsigned int)a2 msgCountToLoad:(unsigned int)a3;
+ (id)getGamePluginLastMsg;
+ (BOOL)is24HourFormat;

@end
