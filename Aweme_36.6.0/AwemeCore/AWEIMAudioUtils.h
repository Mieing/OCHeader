@interface AWEIMAudioUtils : NSObject

+ (BOOL)isAudioMessageType:(long long)a0;
+ (BOOL)isUnreadAudioMessage:(id)a0;
+ (id)topMessageBaseVC;
+ (id)findFirstUnreadAudioOnScreenWithBaseVC:(id)a0;
+ (BOOL)isAudioMessage:(id)a0;

@end
