@interface GameController : NSObject

+ (BOOL)isJSBMd5:(id)a0;
+ (BOOL)isDiceMd5:(id)a0;
+ (id)getMD5ByGameContent:(unsigned int)a0;
+ (void)SetGameContentForMsgWrap:(id)a0;
+ (id)GameEmoticonMsgForEmoticonWrap:(id)a0;

@end
