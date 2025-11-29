@interface DTRpcContextMXXT : NSObject

+ (void)setRpcHeader:(id)a0;
+ (id)getRpcHeader;
+ (void)removeRpcHeader;
+ (void)setForegroundRPC:(BOOL)a0;
+ (void)setRpcRespHeader:(id)a0;
+ (id)getRpcRespHeader;
+ (void)removeRpcRespHeader;
+ (BOOL)isForegroundRPC;
+ (void)setShouldShowFlow:(BOOL)a0;
+ (BOOL)shouldShowFlow;

@end
