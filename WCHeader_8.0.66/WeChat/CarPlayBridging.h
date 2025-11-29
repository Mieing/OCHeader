@interface CarPlayBridging : NSObject

+ (void)startAudioCallWithContact:(id)a0 message:(id)a1;
+ (void)notifyAppDelegateThatCarPlaySceneConnected;
+ (id)getMessageFor:(id)a0;

@end
