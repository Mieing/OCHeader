@interface AWEIMUserByteSyncManager : NSObject

+ (void)registerByteSync;
+ (int)byteSyncBusinessID;
+ (void)rerouteWithMessage:(id)a0;
+ (void)handleMessageInChatBlockGuideWithModel:(id)a0;

@end
