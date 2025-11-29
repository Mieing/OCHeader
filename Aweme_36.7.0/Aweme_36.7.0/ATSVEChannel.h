@interface ATSVEChannel : NSObject

+ (void)forwardEventToVideoChannelWithMethodName:(id)a0 instance:(id)a1;
+ (void)forwardEventToAudioChannelWithMethodName:(id)a0 instance:(id)a1;
+ (void)preload;

@end
