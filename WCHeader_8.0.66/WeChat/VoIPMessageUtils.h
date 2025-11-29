@interface VoIPMessageUtils : NSObject

+ (id)wordingWithType:(int)a0 isSender:(BOOL)a1 duration:(unsigned int)a2;
+ (void)supplementLocalBubbleMessageWrapToUsername:(id)a0 withWordingType:(int)a1 isVideo:(BOOL)a2 roomID:(unsigned long long)a3 roomKey:(unsigned long long)a4 inviteID:(unsigned int)a5 duration:(unsigned int)a6 isCaller:(BOOL)a7 needRedDot:(BOOL)a8 needFixTime:(BOOL)a9 createTime:(unsigned int)a10 exceptionType:(unsigned long long)a11 status:(unsigned int)a12 isIlink:(BOOL)a13;

@end
